    #include <bits/stdc++.h>
    using namespace std;
     
    //using i64 = long long;
     
    void solve() {
        int n;
        cin >> n;
        
        vector<int> cnt(n);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            x--;
            cnt[x]++;
        }
        
        for (int x = 0; x < n; x++) {
            if (cnt[x] >= 3) {
                cout << x + 1 << "\n";
                return;
            }
        }
        
        cout << "-1\n";
    }
     
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        
        int t;
        cin >> t;
        
        while (t--) {
            solve();
        }
        
        return 0;
    }