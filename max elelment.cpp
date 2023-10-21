#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    cout<<*max_element(s.begin(),s.end());
}