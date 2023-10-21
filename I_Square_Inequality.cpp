#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int sum = 0;
    sum = a * a + b * b;
    if (sum < c * c) {
        cout << "Yes";
    }
    else
        cout << "No";
    return 0;
}