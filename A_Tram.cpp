#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,cnt=0,max=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        cnt+=b-a;
        if(cnt>max){
            max=cnt;
        }
    }
    cout<<max<<endl;
    return 0;
    
}