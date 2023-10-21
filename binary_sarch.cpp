#include<bits/stdc++.h>
using namespace std;
    void solve(){
        int a[] = {2,5,5,5,7,9,10};
        int n = 7;
        int x; cin>>x;
        int l = 0, r = 7; 
        int ans = -1;
        while(l <= r){
            int m=(l+r)/2;
            if(a[m] > x) {
                ans = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        cout<<ans<<endl;
        return;
    }
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}