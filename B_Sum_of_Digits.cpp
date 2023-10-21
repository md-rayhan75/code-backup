#include<bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    long long cnt = 0;
    while (s.size() > 1) {
        // if (s.size() == 1) break;
        long long ans = 0;
        for (int i = 0;i < s.size();i++) {
            ans += s[i] - '0';
        }
        s = to_string(ans);
        // long long ans = stoll(s);
        cnt++;
    }
    cout << cnt;
}
int main() {
    solve();
    return 0;
}