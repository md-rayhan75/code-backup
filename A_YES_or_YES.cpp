#include<bits/stdc++.h>
using namespace std;
    

void result(){
    
    string s;  cin>>s;
    if(s[0]!='Y'&& s[0]!='y' || s[1]!='E'&& s[1]!='e'||s[2]!='S'&& s[2]!='s')
    cout<<"NO"<<endl;
    else 
    cout<<"YES"<<endl;
    
}
int main(){
    int t; cin>>t;
    while(t--){
    result();
    }
    return 0;
}