#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 3) {
        cerr << "Usage: " << argv[0] << " source-file target-file" << endl;
        exit(EXIT_FAILURE);
    }
    ifstream ifs(argv[1], ios_base::in);
    if (!ifs.is_open()) {
        cout << "The source file can't open!\n";
        exit(EXIT_FAILURE);
    }
    ofstream ofs(argv[2], ios_base::out);
    if (!ofs.is_open()) {
        cout << "The target file can't open!\n";
        exit(EXIT_FAILURE);
    }

    char ch;
    while (ifs.get(ch)) {
        ofs << ch;
    }
    cout << "Content of " << argv[1] << " copied to " << argv[2] << endl;
    ifs.close();
    ofs.close();
    return 0;
}