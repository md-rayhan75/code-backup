#include<bits/stdc++.h>
using namespace std;
class student {
    public:
    int id;
    double gpa;
    void display(){
        cout<<id<<" "<<gpa<<endl;
    }
    student(int x, double y){
        id =x;
        gpa=y;
    }
};
int main(){ 
    student saif(2,4.6);
    saif.display();
    student  tishan(3,5.00);
    tishan.display();
    return 0;
}