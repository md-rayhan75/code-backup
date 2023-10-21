#include<bits/stdc++.h>
using namespace std;
int t = 1;
int main()
{
    int test;
    cin >> test;
    while (test--) {
        int n; cin >> n;
        int a, b; cin >> a >> b;
        vector<long long> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];
        sort(vec.begin(), vec.end());
        int cnt= 0;
        for (int i = 0; i < n; i++) {
            int ans = b - vec[i];
            int upper = prev(upper_bound(vec.begin(), vec.end(), ans)) - vec.begin();
            ans = a - vec[i];
            int down = lower_bound(vec.begin(), vec.end(), ans) - vec.begin();
            if (down <= i) down = i + 1;
            if (upper - down + 1 >= 0) {
                cnt += (upper - down + 1);
            }
            else break;
        }
        cout << "Case " << t++ << ": " << cnt << endl;
    }

    return 0;
}