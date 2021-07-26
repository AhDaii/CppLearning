#include <iostream>
#include "emp.h"

using namespace std;

int main()
{
    employee em("Trip", "Harris", "Thumper");
    cout << em ;
    em.ShowAll();
    cout << endl;

    manager ma("Amorphia", "Spindragon", "Nuancer", 5);
    cout << ma;
    ma.ShowAll();
    cout << endl;
    
    fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
    cout << fi;
    fi.ShowAll();
    cout << endl;
    
    highfink hf(ma, "Cury Kew");
    hf.ShowAll();
    cout << endl;
    
    cout << "Press a key for next phase:" << endl;
    cin.get();
    highfink hf2;
    hf2.SetAll();

    cout << "Using an abstr_emp * pointer: \n";
    abstr_emp * tri[4] = {&em, &fi, &hf, &hf2};
    for(int i = 0; i < 4; i++) {
        tri[i]->ShowAll();
        cout << endl;
    }

    return 0;
}
