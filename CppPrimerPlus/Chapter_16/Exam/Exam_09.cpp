#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;
const int LEN = 1000000;

int main() {
    srand(time(NULL));
    vector<int> vi0(LEN);
    for(int i = 0; i < LEN; i ++)
        vi0[i] = rand() % LEN;
    vector<int> vi(vi0.begin(), vi0.end());
    list<int> li(vi0.begin(), vi0.end());

    clock_t start = clock();
    sort(vi.begin(), vi.end());
    clock_t end = clock();
    cout << "vi sort use: ";
    cout << (double)(end - start) / CLOCKS_PER_SEC << '\n';

    start = clock();
    li.sort();
    cout << "li sort use: ";
    end = clock();
    cout << (double)(end - start) / CLOCKS_PER_SEC << '\n';

    li = list<int>(vi0.begin(), vi0.end());
    start = clock();
    vi = vector<int>(li.begin(), li.end());
    sort(vi.begin(), vi.end());
    li = list<int>(vi.begin(), vi.end());
    cout << "li copy to vector then sort use: ";
    end = clock();
    cout << (double)(end - start) / CLOCKS_PER_SEC << '\n';

    return 0;
}