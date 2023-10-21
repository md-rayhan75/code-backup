#include<bits/stdc++.h>
using namespace std;
class triangle {
public:
    int perpendicular;
    int base;

    triangle(int p, int b) {
        perpendicular = p;
        base = b;
    }
    
    float area(int p, int b) {
        return p * b * 0.5;
    }

    float diagonal(int p, int b) {
        return sqrt(p * p + b * b);
    }
};
int main() {
    triangle obj(10, 20);
   int area= obj.area(10,20);
   int diagonal= obj.diagonal(10, 20);
    cout << "area:" << area<<endl;
    cout <<"diagonal:"<< diagonal;
}