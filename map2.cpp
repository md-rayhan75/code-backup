#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<long long ,int>cnt;
    for(int i=0;i<v.size();i++)
        cnt[v[i]]++;
    
    for(auto u:cnt){
        cout<<u.first<<"   "<<u.second;
    }

    return 0;
    }
