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
 };
 int main()
{
    student saif,ddd;
    saif.id =89;
    saif.gpa=4.80;
   saif.display();
   ddd.id = 22;
   ddd.gpa =4.99;
   ddd.display();
   return 0;
}