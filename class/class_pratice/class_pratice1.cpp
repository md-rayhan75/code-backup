// 2. Create a class called "Student" to represent a student. The class should
// have a private data member for the student's name. Implement a
// constructor to initialize the student's name and a destructor to display a
// message when a student object is destroyed

#include<bits/stdc++.h>
using namespace std;
class student
{
private:
    string name;
public:

    student() {
        cin>>name3;

    }

     ~student() {
        cout << name;
    }
};
int main() {
    student ob;
   // ob.student(x);
    //ob.~student();

    return 0;
}
