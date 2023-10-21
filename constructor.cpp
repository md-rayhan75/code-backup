#include<bits/stdc++.h>
using namespace std;
class myclass{
    private:
    int a;
    public:
    myclass();
    void show();
};
myclass::myclass(){
    cout<<"in constructor";
    a=5;
}
void myclass::show(){
    cout<<a;

}
int main(){
    myclass ob;
    ob.show();
    return 0;
}