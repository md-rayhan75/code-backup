#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,su;
    cin>>a>>b>>c;
    su=a*b*c;
    int last_two_digit= su %100;
    cout<<last_two_digit<<endl;
    return 0;
    
}