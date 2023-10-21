#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int>vec;
    
    for(int i=0;i<n;i++){
        int x; cin>>x;
    

        vec.push_back(x);
    }
    
    // cout<<*max_element(vec.begin(),vec.end());
    //int a; cin>>a;
    //vec.erase(vec.begin()+a);
    //for(auto it= vec.begin()+1;it!= vec.end();it++){
    //auto it = vec.begin();
   // it++ , it++;
    //int a; cin>>a;
    // vec.insert(it,a);

    sort(vec.begin(),vec.end());
    int sz = unique (vec.begin(),vec.end()-vec.begin());
    cout<<sz;
    for(auto it : vec){
        cout<<it<<" ";
    }
    return 0;
}