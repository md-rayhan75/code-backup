#include<bits/stdc++.h>
using namespace std;
 void solve(){
    string s = "codeforces";
    string m;
    cin>>m;
    int ans=0;
    for(int i=0;i<10;i++){
        if(s[i]!=m[i]){
            ans++;
        }
    }
    cout<<ans<<endl;
 }
 int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
 }