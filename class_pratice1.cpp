#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int id;
    string name;
    string address;
    void Read(int x, string a, string b)
    {
        id=x;
        name=a;
        address=b;
    }
    void display(){
        cout<<id<<" "<<name<<" "<<address;
    }

};
int main(){
    student ob;
    int x; string a; string b;
    cin>>x>>a>>b;
    ob.Read(x,a,b);
    ob.display();
    return 0;
}