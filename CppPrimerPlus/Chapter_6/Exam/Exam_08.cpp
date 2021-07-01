#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream ifs;
    ifs.open("Exam_08.txt");
    if(!ifs.is_open())
        exit(EXIT_FAILURE);
    char ch;
    int count = 0;
    while(ifs.get(ch)) {
        cout << ch;
        count ++;
    }
    cout << count;
    ifs.close();
    return 0;
}