    #include <bits/stdc++.h>
    using namespace std;
     
    using i64 = long long;
     
    void solve() {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        cout << accumulate(a.begin(), a.end(), 0) - n * *min_element(a.begin(), a.end()) << "\n";
    }
     
    int main() {
       
        cin.tie(nullptr);
        
        int t;
        cin >> t;
        
        while (t--) {
            solve();
        }
        
        return 0;
    }