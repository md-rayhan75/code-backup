#include<bits/stdc++.h>
using namespace std;
void solve() {
    int x = 0; int y = 0;
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (auto c : s) {
        if (c == 'L')x--;
        else if (c == 'R')x++;
        else if (c == 'U')y++;
        else y--;
        if (x == 1 and y == 1) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}