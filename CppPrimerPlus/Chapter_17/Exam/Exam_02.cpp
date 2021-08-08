#include <fstream>
#include <iostream>
using namespace std;

int main() {
    char ch;
    ofstream ofs("Exam_02.txt", ios_base::out);
    cout << "Enter anything: ";
    while (cin.get(ch))
        ofs << ch;
    if (cin.eof())
        cout << "\n It is EOF" << endl;
    else {
        std::cerr << "Unkonwn error" << endl;
        exit(EXIT_FAILURE);
    }
    ofs.close();
    return 0;
}