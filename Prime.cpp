#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if(n <= 1) return false;
    if(n == 2) return true;
    for (int i= 2; i <=n; i++)  {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int num = 50;
    for(int i = num; i >= 1; i--) {
        if(isPrime(i)) {
            cout<<i<<endl;
            break;
        }
    }
    cout<<endl;
    return 0;
}