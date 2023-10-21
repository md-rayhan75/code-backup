#include<bits/stdc++.h>
using namespace std;
class sumRe {
public:
    
    int a;
    int b;
    sumRe(int a, int b) {
        this->a = a;
        this->b = b;
    }

    int sum( int a, int b) {
        return a + b;
    }

    long sum( long a, long b) {
        return a + b;
    }
};
int main() {

    sumRe ob(10, 20);
    ob.sum()
    cout << ob.sum(10, 20);
    return 0;
}