#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int cnt=0;
    char c[n];
    for(int i=0;i<n;i++){
        cin>>c[i];
        if(c[i-1]==c[i])cnt++;

    }
    cout<<cnt<<endl;
    return 0;
}