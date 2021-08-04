#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {    
    string str;
    set<string> mat, pat;
    cout << "input Mat's friend list:\n";
    while(getline(cin, str), str != "") {
        mat.insert(str);
    }
    cout << "input Pat's friend list:\n";
    while(getline(cin, str), str != "") {
        pat.insert(str);
    }
    set<string> res;
    set_union(mat.begin(), mat.end(), pat.begin(), pat.end(), insert_iterator<set<string>>(res, res.begin()));
    for(auto it : res)
        cout << it << '\n';
    return 0;
}