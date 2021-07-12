#include <iostream>
#include <new>
#include <cstring>
using namespace std;

struct chaff{
    char dross[20];
    int slag;
};

char buff[100];

int main() {
    chaff *arr = new (buff) chaff[2];
    strcpy(arr[0].dross, "hello");
    arr[0].slag = 1;

    strcpy(arr[1].dross, "world");
    arr[1].slag = 2;


    /* cout << (int *)buff << endl;
    cout << (int *)arr << endl;
    cout << (int *)&arr[1] << endl; */
    
    for(int i = 0; i < 2; i ++)
        cout << "[SHOW "<< i << "] dross: " << arr[i].dross << ", slag: " << arr[i].slag << endl;
    return 0;
}