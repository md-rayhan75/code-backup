#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
    string name;
    int age;
    void display(){
        cout<<name<<age;
    }
};
class student:public person{
    public:
    int id;
    void display1(){
        cout<<id<<name<<age;
    }
};

 
int main(){
    student obj;
    obj.name="Saif";
    obj.id=33;
    obj.age=23;
    obj.display1();
    return 0;
}