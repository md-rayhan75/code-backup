#include<bits/stdc++.h>
using namespace std;

class box {
    public:
    int length;
    int width;
    int height;
    box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }
    box() {
        
    }

    int getArea() {
        return length * width;
    }
};

int main() {
    int l, h, w;
    cout << "Enter lengh, height and width: \n";
    cin >> l >> h >> w;
    
    box ob1(l, h, w);

    cout << "Area: " << ob1.getArea() << endl;
    return 0;
}