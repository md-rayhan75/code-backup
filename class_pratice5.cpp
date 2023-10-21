#include<bits/stdc++.h>
using  namespace std;
class myclass{
    public:
    myclass();
    ~myclass();
    void show();
};
myclass::myclass(){
    cout<<"in constructor";
}
myclass::~myclass(){
    cout<<"distructor";

}
