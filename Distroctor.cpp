#include<bits/stdc++.h>
using namespace std;
class myclass
{   

    int a;
    public:
    myclass();
    ~myclass();
    void show();
};
myclass::myclass(){
    cout<<"in constructor";
    a=28;
}
myclass::~myclass(){
    cout<<"destructing";
}
void myclass::show (){
    cout<<a<<endl;
}
int main(){
    myclass ob;
    ob.show();
    return 0;
}