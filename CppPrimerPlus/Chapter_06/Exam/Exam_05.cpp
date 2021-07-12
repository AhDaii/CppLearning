#include <iostream>
using namespace std;

int main() {
    int N;
    while(cin >> N && N >= 0) {
        double res = 0;
        if(N > 5000 && N <= 15000)
            res = (N - 5000) * 0.1;
        else if(N <= 35000)
            res = 10000 * 0.1 + (N - 15000) * 0.15;
        else
            res = 10000 * 0.1 + 20000 * 0.15 + (N - 35000) * 0.2;
        cout << res << endl;
    }
    return 0;
}