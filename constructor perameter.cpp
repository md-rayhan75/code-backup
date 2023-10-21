#include<bits/stdc++.h>
using namespace std;
class myclass{
    int a,b;
    public:
    myclass(int x, int y);
    void show();
};
myclass::myclass(int x, int y){
    cout<<"in constructor";
    a=x;
    b=y;
}
void myclass::show(){
    cout<<a<<"   "<<b;
}
int main(){
 int a,b;
 cin>>a>>b;
 myclass ob(a,b);
 ob.show();
 return 0;   
}