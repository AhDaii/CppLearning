#include <algorithm>
#include <fstream>
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    ifstream ifs_1("mat.dat", ios_base::in), ifs_2("pat.dat", ios_base::in);
    if (!ifs_1.is_open() || !ifs_2.is_open()) {
        cerr << "can't open input file\n";
        exit(EXIT_FAILURE);
    }
    ofstream ofs("matnpat.dat", ios_base::out);
    if (!ofs.is_open()) {
        cerr << "can't open output file\n";
        exit(EXIT_FAILURE);
    }
    string str;
    set<string> mat, pat;
    while (getline(ifs_1, str)) {
        mat.insert(str);
    }
    while (getline(ifs_2, str)) {
        pat.insert(str);
    }
    set<string> res;
    set_union(mat.begin(), mat.end(), pat.begin(), pat.end(),
              insert_iterator<set<string>>(res, res.begin()));
    for (auto it : res)
        ofs << it << '\n';
    ofs.close();
    ifs_2.close();
    ifs_1.close();
    return 0;
}