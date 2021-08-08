#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream ifs_1("input01.txt", ios_base::in),
        ifs_2("input02.txt", ios_base::in);
    ofstream ofs("output.txt", ios_base::out);
    if (!ofs.is_open()) {
        cout << "The output file can't open\n";
        exit(EXIT_FAILURE);
    }
    char ch;
    while (!ifs_1.eof() || !ifs_2.eof()) {
        if (!ifs_1.eof()) {
            while (ifs_1.get(ch) && ch != '\n')
                ofs << ch;
            ofs << ' ';
        }
        if (!ifs_2.eof()) {
            while (ifs_2.get(ch) && ch != '\n')
                ofs << ch;
            ofs << '\n';
        }
    }
    ifs_1.close();
    ifs_2.close();
    ofs.close();
    return 0;
}