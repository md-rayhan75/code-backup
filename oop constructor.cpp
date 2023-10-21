#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int id; double gpa;
    void display(){
        cout<<id<<"  "<<gpa<<endl;
    }
    student(int x, double y){
        id=x;
        gpa=y;
    }
};
int main(){09864

    student saif(89,4.66);
    saif.display();
    student atik(100,5.00);
    atik.display();
    student Rashadul(86,5.00);
    Rashadul.display();
    return 0;
}