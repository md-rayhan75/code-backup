#include<bits/stdc++.h>
using namespace std;
class sumNum {
public:
    
    int a;
    int b;
    int c;
    sumNum(int a, int b, int c) {
        this->a = a;
        this->b = b;
    }

    long sum( long a, long b) {
        return a + b;
    }

    int sum( int a, int b, int c) {
        return a + b + c;
    }
};
int main() {
    sumNum obx(10, 20, 30);

    cout << obx.sum(10, 20) << endl;
    return 0;
}