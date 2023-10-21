#include<bits/stdc++.h>
using namespace std;
int tc = 1;
int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a, b; cin >> a >> b;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int find = b - v[i];
            int up = prev(upper_bound(v.begin(), v.end(), find)) - v.begin();
            find = a - v[i];
            int down = lower_bound(v.begin(), v.end(), find) - v.begin();
            if (down <= i) down = i + 1;
            if (up - down + 1 >= 0) {
                ans += (up - down + 1);
            }
            else break;
        }
        cout << "Case " << tc++ << ": " << ans << endl;
    }

    return 0;
}