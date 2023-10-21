#include<bits/stdc++.h>
using namespace std;
class tutrial{
    private:
    string Myname ="Saif islam Rayhan";
    public:
    int id,roll;
    friend int display(tutrial displayobj);
void read(int a, int b){
    id=a;
    roll=b;
    cout<<id<<" "<<roll;
}

};

int display(tutrial displayobj){
    cout<<"My name is"<<displayobj.Myname;
}
int main(){
    tutrial obj;
    display(obj);
    obj.read(3,4);
    //cout<<id<<roll;
    return 0;
}