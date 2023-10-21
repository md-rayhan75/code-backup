#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    int id; string name;  string address;
    student(int x, string a, string b);
    void show();
};
student::student(int x, string a,string b){
    id=x;
    name=a;
    address=b;
}
void student::show(){
    cout<<id<<" "<<name<<" "<<address;

}
int main(){
        
        int x; string a; string b;
        cin>>x>>a>>b;
        student ob(x,a,b);
        //ob.student(x,a,b);
        ob.show();
        return 0; 
}