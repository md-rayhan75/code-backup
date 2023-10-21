#include<bits/stdc++.h>
using namespace std;
int main() {
    int  n; cin >> n;  int ar[n];
    for (int i = 0;i < n;i++)cin >> ar[i];

    long long sum1 = 0, sum3 = 0, ans = 0;
    int i = 0;
    int j = n - 1;

    while (i <= j) {
        if (sum1 < sum3) {
            sum1 += ar[i++];
        }
        else if (sum1 > sum3) {
            sum3 += ar[j--];
        }
        if (sum1 == sum3) {
            ans = max(ans, sum3);
            sum3 += ar[j--];
        }
    }
    cout << ans << endl;
    return 0;
}