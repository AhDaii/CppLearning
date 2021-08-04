#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> lotto(int total, int k);

int main() {
    vector<int> winner;
    winner = lotto(51, 6);
    for(auto it : winner)
        cout << it << ' ';
    return 0;
}


vector<int> lotto(int total, int k) {
    vector<int> num(total);
    for(int i  = 0; i < total; i ++)
        num[i] = i + 1;
    
    vector<int> res(k);
    for(int i = 0; i < k; i ++) {
        random_shuffle(num.begin(), num.end());
        res[i] = num[0];    
    }
    return res;
}
