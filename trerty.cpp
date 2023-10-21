#include<bits/stdc++.h>
using namespace std;

void result()
{
 long long n;
 cin>>n;
 long  x=0;
 long y=0;
 for(long i=0;i<n;i++){
    long long a,b;
    cin>>a>>b;
    if(a<=10 and b>x){
        x=b;
        y=i+1;
    }
 }
 cout<<y<<endl;
}
int main()
{
    
    long long t;
    cin>>t;
 
    while(t--)
    {
        result();
    }
    return 0;
}