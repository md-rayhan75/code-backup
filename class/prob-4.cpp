#include<bits/stdc++.h>
using namespace std;

class student {
public:
    string name;
    int id;
    double cgpa;
    void test(float x)
    {
        cgpa = x;
    }
    
    void test(student obj1,student obj2)
    {
        cout << (obj1.cgpa + obj2.cgpa) / 2;
    }
};





int main() {

    student obj1, obj2;
    obj1.test(3.22);
    obj2.test(2.24);
        obj1.test(obj1,obj2);

}