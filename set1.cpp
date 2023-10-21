#include<bits/stdc++.h>
using namespace std;
int main() {
    multiset<int>s;
    s.insert(4);
    s.insert(6);
    s.insert(7);
    s.insert(8);
    s.insert(4);
    cout << s.count(4);
    return 0;
}