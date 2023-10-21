#include<bits/stdc++.h>
using namespace std;
 
 class student
 {
    public:
    
    int id;
    double gpa;
    void display(){
        cout<<id<<" "<<gpa;

    }
    void setvalue(int x, double y){
        id=x;
        gpa=y;
    }
 };
 int main()
{
    student saif,ddd;
    int a = 100;
    double b = 3.59;
    saif.setvalue(a,b);
    saif.display();
    // ddd.setvalue(66,5.00);
    // ddd.display();
   return 0;
}