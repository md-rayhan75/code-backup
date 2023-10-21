#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int>vec;
    for (int i = 0;i < n;i++){
        int x; cin >> x;
        vec.push_back(x);
    }
    auto it = vec.begin();
    it++, it++, it++;
    int a; cin >> a;
    vec.insert(it, a);
    sort(vec.begin(), vec.end());
    for (auto it : vec) {
        cout << it << " ";
    }
    return 0;
}