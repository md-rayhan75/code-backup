#include<bits/stdc++.h>
using namespace std;
int main(){
int n; cin>>n;
vector<int>v(n+1);
for(int i = 1;i<=n;i++){
    cin>>v[i];

}
int x,a,b;
cin>>x;
//cin>>a>>b;
sort(v.begin(),v.endl());

v.erase(v.begin()+5);
//v.erase(v.begin()+a,v.begin()+b);
cout<<v.size()-1<<endl;
for (auto it = v.begin()+1; it != v.end();it++){
cout<<*it<<" ";
}
return 0;
}