#include <iostream>
using namespace std;

int main() {
    char ch = 'A';
    int a_grade, b_grade, c_grade, d_grade, f_grade;
    a_grade = b_grade = c_grade = d_grade = f_grade = 0;

    switch(ch) {
        case 'A': a_grade ++; break;
        case 'B': b_grade ++; break;
        case 'C': c_grade ++; break;
        case 'D': d_grade ++; break;
        default: f_grade++;
    }
    cout << a_grade << " " << b_grade << " " << c_grade << " " << d_grade << " " << f_grade;
    return 0;
}