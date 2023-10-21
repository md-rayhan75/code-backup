// 4. Create a class Student that has private data members for the student's roll
// number, and age. Implement a parameterized constructor, and a destructor
// for the class. Define a function isSenior outside the class that takes a
// Student object as an argument and returns true if the student's age is
// greater than 24, otherwise returns false. 


#include<bits/stdc++.h>
using namespace std;
class student
{
private:
    int roll;
    int age;
public:
    student(int x, int y) {
        roll = x;
        age = y;
        
    }
    ~student() {
       
    }
    void show();
};
void student::show() {

    if (age > 24) {
        cout << "true";

    }
    else cout << "false";
}
int main() {
    int x, y;
    cin >> x >> y;
    student ob(x,y);
    ob.show();

    return 0;
}