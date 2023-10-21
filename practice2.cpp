#include<bits/stdc++.h>
using namespace std;
class Boxwhich
{
public:
    int lenth, width, height;
    //cin >> lenth >> width >> height;
    Boxwhich() {

    }
    Boxwhich(int l, int w, int h) {
        lenth = l;
        width = w;
        height = h;
    }
    int getArea() {
        return lenth * width;
    }
};
int main() {
    int l, w, h;
    cin >> l >> w >> h;
    Boxwhich obj(l,w,h);
    cout << obj.getArea();
    return 0;
}