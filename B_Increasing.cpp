    #include <bits/stdc++.h>
     using namespace std;
     void solve() {
        int n;
        cin >> n;
         set<int> s;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            s.insert(x);
        }
        if (int(s.size()) == n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
     int main() {
        int t; cin >> t;
        while (t--) {
            solve();
        } 
         return 0;
    }