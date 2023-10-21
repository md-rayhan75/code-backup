#include<bits/stdc++.h>
using namespace std;

long long BigMod(int a, int b, int m) {
    if (b == 0)
        return 1;
    if (b % 2 == 1)
        return (BigMod(a, b - 1, m) * a) % m;
    return sqr(BigMod(a, b / 2, m)) % m;
}

int main() 
{
    
    int a, b, m;
    cin >> a >> b >> m;
    cout << BigMod(a, b, m);
    return 0;
}