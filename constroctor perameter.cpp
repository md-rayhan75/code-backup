#include<bits/stdc++.h>
using namespace std;
class myclass{
    int a,b;
    public:   
    myclass(int x, int y);
    //void show();
};
myclass::myclass(int x, int y){
    cout<<"in constroctor";
    a=x;
    b=y;
}
//void myclass::show(){
//    cout<<a<<"  "<<b;
//}
int main(){
    myclass ob(3,5);
    ob.a;
    return 0;

}