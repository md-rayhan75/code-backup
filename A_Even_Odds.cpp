#include<bits/stdc++.h>

 using namespace std;
 
void solve()
{
   long long  n,k,x;
   cin>>n>>k;
 
   if(n%2==0){
     x=n/2;
   }
   else{
       x=n/2+1;
   }
   if(k<=x){
    cout<<(k*2)-1<<endl;
   }
   else{
    cout<<(k-x)*2<<endl;
   }
 
}
int main()
{
 
    solve();
    return 0;
}