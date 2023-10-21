#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
 
    while(t--)
    {
        char str[50];
        int n,count=0;
 
        cin>>n;
 
        for(int i=0; i<n; i++)
        cin>>str[i];
 
        sort(str,str+n);
 
        count=n;
        for(int i=0; i<n; i++)
        if(i==0||str[i]!=str[i-1])
        count++;
 
        cout<<count<<endl;
 
 
    }
    return 0;
}