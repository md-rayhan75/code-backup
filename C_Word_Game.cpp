#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    map<string, int>m;
    cin >> n;
    string a[n], b[n], c[n];


    for (int i = 0;i < n;i++) {
        cin >> a[i];
        m[a[i]]++;
    }
    for (int i = 0;i < n;i++) {
        cin >> b[i];
        m[b[i]]++;

    }
    for (int i = 0;i < n;i++) {
        cin >> c[i];
        m[c[i]]++;
    }
    int A = 0, B = 0, C = 0;
    for (int i = 0;i < n;i++) {
        if (m[a[i]] == 1)A += 3;
        else if (m[a[i]] == 2)A += 1;
    }
    for (int i = 0;i < n;i++) {
        if (m[b[i]] == 1)B += 3;
        else if (m[b[i]] == 2)B += 1;
    }
    for (int i = 0;i < n;i++) {
        if (m[c[i]] == 1)C += 3;
        else if (m[c[i]] == 2)C += 1;
    }
    cout << A << " " << B << " " << C << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();

    }
    return 0;
}
