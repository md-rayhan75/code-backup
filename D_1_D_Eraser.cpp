#include<bits/stdc++.h>
using namespace std;
void solve() {

    int n, k, i, cnt = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = 0; i < s.size();i++) {
        if (s[i] == 'B') {
            cnt++;
            int j = i;
            for (;j < k + i and j < n;j++) {
                s[j] = 'W';
            }
            i = j - 1;
        }
    }
    cout << cnt << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}