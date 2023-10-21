// 5. Create a class Rectangle that should have data members for width and
// height. Implement a default constructor, a parameterized constructor, and a
// destructor for the class. Define a function to calculate the area and
// perimeter of the rectangle outside the class.
#include<bits/stdc++.h>
using namespace std;
class Rectangel
{
public:
    double width;
    double height;
    Rectangel() {
        
    }
    Rectangel(double x, double y) {
        width = x;
        height = y;
    
    }
    ~Rectangel() {

    }
    void show();
};
void Rectangel::show() {
    double area = width * height;
    double perimetar = 2 * (width + height);
    cout << "Area:" << area << endl;
    cout << "perimetar " << perimetar;
}


int main() {
    double x, y;
    cin >> x >> y;
    Rectangel ob(x, y);
    ob.show();
    // cout << "Area:" << area;

    return 0;
}