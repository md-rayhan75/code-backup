#include<bits/stdc++.h>
using namespace std;
int main()
   {
    
    string s;
    cin>>s;
    string tamp = s;
    reverse (tamp.begin(),tamp.end());
    if(s==tamp)cout<<"palindrom";
    else
    cout<<"not palindrom";
    
    return 0;
  
  }
