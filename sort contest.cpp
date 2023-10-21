#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    for(int i = 0; i < n; i++) {
        int a,b,c,x,y,z;
        cin>>a>>b>>c;
        x=a+b;
        y=b+c;
        z=a+c;
        if(x>=10||y>=10||z>=10){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;

}