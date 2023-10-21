#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int id;
    string  name;
    string address;
    void Read(int x,string a,string  b){
        id=x;
        name=a;
        address=b;
    }
    void display(){
        cout<<id<<" "<<name<<" "<<address;

    }

};
int main(){
    student ob[5];
    for(int i=0;i<5;i++){
        int x;
         string a;
        strging b;
         cin>>x>>a>>b;
        ob[i].Read(x,a,b);
    }
    for(int i=0;i<5;i++){
        ob[i].display();
    }
    return 0;

}