#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long  n;
    cin >> n;
    vector<long long > v(n), v1(n);
    for (int  i = 0; i < n; i++)
    {
        cin >> v[i];
        v1[i] = v[i];
    }
    sort(v1.begin(), v1.end());
    for (int i = 0; i < n; i++)
    {
        if (v[i] == v1[n - 1])
        {
            cout << v[i] - v1[n - 2] << " ";
        }
        else
        {
            cout << v[i] - v1[n - 1] << " ";
        }
    }
    cout<<end
}

int main() {
    int test;
    while (test--) {
        solve();
    }

    return 0;
}