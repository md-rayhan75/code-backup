#include<bits/stdc++.h>
using namespace std;
class student {
    public:
    int id;
    double gpa;
    void display(){
        cout<<id<<" "<<gpa;
    }
    student(int x,double y){
        id=x;
        gpa=y;
    }
};
int main(){
    student ob(4,4.9);
    ob.display();
    student tishan(22,4.5)
    tishan.display();
    return 0;
}