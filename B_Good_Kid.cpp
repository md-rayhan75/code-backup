#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int >v;
    for (int i = 0;i < n;i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    int sum = 1;
    sort(v.begin(), v.end());
    v[0] = v[0] + 1;

        for (int i = 0;i < v.size();i++) {

         sum *=v[i];

    }
     cout << sum << endl;
}

int main() {
    //ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}