#include <iostream>
using namespace std;
class AustraliaCircleField {
    private:
double radius; 
public:
AustraliaCircleField() {
radius = 100;
}

AustraliaCircleField(double radius) {
this->radius = radius;
}
double getRadius() {
return radius;
}
void setRadius(double radius) {
this->radius = radius;
}
double getArea() {
return 3.14159 * radius * radius;
}

};
int main() {
    
    AustraliaCircleField circle1;
    AustraliaCircleField circle2(120);
    AustraliaCircleField circle3(240);
    cout << "The radius of circle1 is " << circle1.getRadius() << " and its area is " <<
        circle1.getArea() << endl;
    cout << "The radius of circle2 is " << circle2.getRadius() << " and its area is " <<
        circle2.getArea() << endl;
    cout << "The radius of circle3 is " << circle3.getRadius() << " and its area is " <<
        circle3.getArea() << endl;
    // Change the radius of circle2 to 350
    circle2.setRadius(350);
    // Print the new radius and area of circle2
    cout << "The radius of circle2 is now " << circle2.getRadius() << " and its area is " <<
        circle2.getArea() << endl;
    return 0;
}