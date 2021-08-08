#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Store {
   private:
    ostream& os;

   public:
    Store(ostream& o) : os(o) {}
    void operator()(const string&);
};

void Store::operator()(const string& str) {
    size_t len = str.length();
    os.write((char*)&len, sizeof(size_t));
    os.write(str.data(), len);
}

void ShowStr(const string&);
void GetStrs(ifstream&, vector<string>&);

int main() {
    vector<string> vostr;
    string temp;
    cout << "Enter strings (empty line to quit):\n";
    while (getline(cin, temp) && temp[0] != '\0')
        vostr.push_back(temp);
    cout << "Here is your input.\n";
    for_each(vostr.begin(), vostr.end(), ShowStr);

    ofstream fout("strings.dat", ios_base::out | ios_base::binary);
    for_each(vostr.begin(), vostr.end(), Store(fout));
    fout.close();

    vector<string> vistr;
    ifstream fin("strings.dat", ios_base::in | ios_base::binary);
    if (!fin.is_open()) {
        cerr << "Could not open file for input.\n";
        exit(EXIT_FAILURE);
    }
    GetStrs(fin, vistr);
    cout << "\nHere are the strings read from the file:\n";
    for_each(vistr.begin(), vistr.end(), ShowStr);

    fin.close();
    return 0;
}

void ShowStr(const string& str) {
    cout << str << '\n';
}

void GetStrs(ifstream& ifs, vector<string>& vistr) {
    size_t len;
    while (ifs.read((char*)&len, sizeof(size_t))) {
        char ch;
        string tmp = "";
        while (len--) {
            ifs.read(&ch, sizeof(char));
            tmp += ch;
        }
        vistr.push_back(tmp);
    }
}
