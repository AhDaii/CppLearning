#include <iostream>
using namespace std;
const int Max = 5;

double* fill_array(double ar[], int limit) {
    double tmp;
    int i;
    for(i = 0; i < limit; i ++) {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> tmp;
        if(!cin) {
            cin.clear();
            while(cin.get() != '\n') 
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if(tmp < 0) 
            break;
        ar[i] = tmp;
    }
    return ar + i;
}

void show_array(double *bg, double *ed) {
    for(double *p = bg; p != ed; ++ p)
        cout << *p << " ";
    cout << endl;
}

void revalue(double r, double *bg, double *ed) {
    for(double *p = bg; p != ed; ++ p)
        *p *= r;
}

int main() {
    double properties[Max];
    double *ed = fill_array(properties, Max);
    show_array(properties, ed);
    if((ed - properties) > 0) {
        cout << "Enter revaluation factor: ";
        double factor;
        while(!(cin >> factor)) {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, ed);
        show_array(properties, ed);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}