#include<bits/stdc++.h>
using namespace std; 
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n; 
        map<string ,int>cnt;
        for(int i=0;i<n;i++){
            string s; cin>>s;
            cnt[s]++;
        }
        for(auto u:cnt){
            if(u.second==2) {
                cout<<u.first<<" "<<1<<endl;
            }
        }
    }
    return 0;
}