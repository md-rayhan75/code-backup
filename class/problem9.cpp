#include <iostream>
using namespace std;
class Square {
private:
int length; 
public:
void set_length(int length) {
this->length = length;
}

static int area(Square square) {
return square.length * square.length;
}
};
int main() {
Square square;
square.set_length(10);
int area = Square::area(square);
cout << "The area of the square is " << area << endl;
return 0;
}