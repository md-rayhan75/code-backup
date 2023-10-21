#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,cnt=0; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]!=v[i+1]){
        cnt++;
        }
        //else
       // cnt++;
    }
    //for(int j=1;j<;j++){
        //if(v[i]!=v[j])cnt++;

    //}
    cout<<cnt;
    return 0;
}