#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n; cin>>n;
    
    vector<int> v;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.push_back(x);
        
    }

    int max = *max_element(v.begin()+1, v.end());
    if(max==v[0]){
        cout<<1<<endl;
    }
    else if(max > v[0]){
        int m= max-v[0];
        cout<<m+1<<endl;
    } else cout<<0<<endl;
    

    return 0;
}