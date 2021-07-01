#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct orz{
    string name;
    int mon;
};

int main() {
    ifstream ifs;
    ifs.open("Exam_09.txt");

    if(!ifs.is_open())
        exit(EXIT_FAILURE);

    int N;
    ifs >> N;
    int count = 0;
    struct orz *arr = new struct orz[N];
    for(int i = 0; i < N; i ++) {
        ifs.get();
        getline(ifs, arr[i].name);
        ifs >> arr[i].mon;
    }

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
    ifs.close();
    return 0;
}