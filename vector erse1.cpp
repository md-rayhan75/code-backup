#include<bits/stdc++.h>
using namespace std;
int main(){
int n; cin>>n;
vector<int>v(n+1);
for(int i = 1;i<=n;i++){
    cin>>v[i];

}
//int x,a,b;
//cin>>x;
//cin>>a>>b;

//v.erase(v.begin()+x);
//v.erase(v.begin()+a,v.begin()+b);
cout<<v.size()-1<<endl;

for (auto it = v.begin()+1; it != v.end();it++){
  //  for(auto it : v){
cout<<*it<<" ";
}
return 0;
}