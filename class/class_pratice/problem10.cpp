#include<bits/stdc++.h>
using namespace std;
class  cse37
{
public:
    float cgpa;
    long id;
    cse37(float x, long y) {
        cgpa = x;
        id = y;

    }
    void display() {
        cout << cgpa << " " << id;
    }
};
int main() {
    cse37 obj(3.9, 40022);
    obj.display();

    return 0;
}