#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int cnt=0;
    cin>>t;
    while(t--){
        //int cnt=0;
        int n; cin>>n;
        string s1;
        cin>>s1;
        string s2;
        cin>>s2;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
if(s1[0]==s2[0])cnt++;
 else if(s1[1]==s2[1])cnt++;
 else if(s1[2]==s2[2])cnt++;
 else if(s1[3]==s2[3])cnt++;
 else if()
 

    }
    cout<<cnt<<endl;
}