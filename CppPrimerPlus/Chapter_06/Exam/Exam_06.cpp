#include <iostream>
#include <string>
using namespace std;

struct orz{
    string name;
    double mon;
};

int main() {
    int N;
    cin >> N;
    int count = 0;
    struct orz *arr = new struct orz[N];
    for(int i = 0; i < N; i ++)
        cin >> arr[i].name >> arr[i].mon;

    cout << "Grand Patrons:" << endl;
    for(int i = 0; i < N; i ++)
        if(arr[i].mon > 10000) {
            cout << arr[i].name << " " << arr[i].mon << endl;
            count ++;
        }
    if(count == 0)
        cout << "none" << endl;
    count = 0;
    cout << "Patrons:" << endl;
    for(int i = 0; i < N; i ++)
        if(arr[i].mon <= 10000) {
            cout << arr[i].name << " " << arr[i].mon << endl;
            count ++;
        }
    if(count == 0)
        cout << "none" << endl;
    return 0;
}