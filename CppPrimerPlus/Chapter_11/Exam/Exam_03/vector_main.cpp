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
    unsigned long steps = 0, _min = INT32_MAX, _max = 0, sum = 0;
    double target, dstep;

    int N;
    cout << "Enter the numebr of testcases: ";
    cin >> N;

    for(int i = 0; i < N; i ++) {
        cout << "Enter target distance: ";
        cin >> target;
        cout << "Enter step length: ";
        cin >> dstep;
        Vector step(0.0, 0.0), result(0.0, 0.0);
        steps = 0;

        while(result.magval() < target) {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps ++;
        }
        if(steps > _max)
            _max = steps;
        else if(steps < _min)
            _min = steps;
        sum += steps;
    }
    cout << "the maximum step is " << _max << ", the minimum step is " << _min << ", the average step is " << 1.0 * sum / N << endl; 
    return 0;
}