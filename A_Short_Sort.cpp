#include<bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    
     if (s == "abc") {
         cout << "YES" << endl;
         
     }
     else if (s == "acb") {
         cout << "YES" << endl;
     }
     else if (s == "bac") {
         cout << "YES" << endl;
     }
     else if (s == "cba") {
         cout << "YES" << endl;
     }
     else
        cout << "NO" << endl;



 }

int main() {
    // //ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
     while (t--) {
        solve();
     }
    //solve();
    return 0;
}