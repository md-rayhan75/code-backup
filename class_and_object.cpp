#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

};
int main()
{   
    student rahim;
    rahim.roll = 29;
    rahim.cls =9;
    rahim.section ='A';
    char nm[100] ="rahim";
    strcpy(rahim.name,nm);

      student karim;
    karim.roll = 33;
    karim.cls =4;
    karim.section ='B';
    char nm1[100] ="karim";
    strcpy(karim.name,nm1);
    cout<<rahim.name<<endl;
    cout<<karim.name;

    return 0;
}