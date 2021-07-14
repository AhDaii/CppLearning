#include "vector.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
using VECTOR::Vector;

int main() {
    srand(time(0));
    double direction;
    Vector step(0.0, 0.0), result(0.0, 0.0);
    unsigned long steps = 0;
    double target, dstep;

    cout << "Enter target distance: ";
    cin >> target;
    cout << "Enter step length: ";
    cin >> dstep;

    ofstream ofs;
    ofs.open("output.txt");
    ofs << "Target Distance: " << target << ", Step Size: " << dstep << endl;
    ofs << "0: " << result << endl;
    while(result.magval() < target) {
        direction = rand() % 360;
        step.reset(dstep, direction, Vector::POL);
        result = result + step;
        steps ++;
        ofs << steps << ": " << result << endl;
    }
    ofs << "After " << steps << " steps, the subject has the following location:" << endl;
    ofs << result << endl;
    ofs << "or" << endl;
    result.polar_mode();
    ofs << result << endl;
    ofs << "Average outward distance per step = " << result.magval() / steps << endl;
    ofs.close();
    /* 
        Example: target distance = 100  step size = 20
     */
    return 0;
}