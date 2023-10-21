#include<bits/stdc++.h>
using namespace std;
int main() {
    set<int>s;
    s.insert(2);
    s.insert(6);
    s.insert(4);
    s.erase(4);
    cout << s.size() << endl;
    for (auto u : s)cout << u<<" ";
    return 0;
}