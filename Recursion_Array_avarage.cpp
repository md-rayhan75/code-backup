#include<bits/stdc++.h>
using namespace std;


double avg(int i, int n, int a[]) {
    if (i >= n)
        return 0.0;
    return a[i] + avg(i + 1, n, a);
}

int main()
{
    
    int n; cin >> n;
    int a[n];
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    cout.precision(6);
    cout << fixed << avg(0,n,a)/n<<endl;
    return 0;
}