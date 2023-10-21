#include<bits/stdc++.h>
using namespace std;
void result(){
    int n; cin>>n;
    string s;  cin>>s;
    sort(s.begin(),s.end());
    if(s=="Timru"){
        cout<<"YES"<<endl;

    } else {
        cout<<"NO"<<endl;
    }
}
int main()
{
    int t; cin>>t;

    while(t--){
            result();
    }
    
    return 0;
}