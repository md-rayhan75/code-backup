#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int a,b,c,d,ans=0;
        cin>>a>>b>>c>>d;
        if(b>a){
            ans++;
        }
        if(c>a){
            ans++;
        }
        if(d>a){
            ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
    }