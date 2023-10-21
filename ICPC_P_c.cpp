#include <bits/stdc++.h>

#define endl '\n'
#define sqr(x) (x) * (x)
#define gcd(x,y) __gcd(x,y)
#define lcm(x,y) ((x/gcd(x,y)) * y)
#define sz(x) (int)x.size()
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()


using namespace std;

using ll = long long;
using ld = long double;
using ull = unsigned long long;

const ld PI = acos(-1.0);
const ll N = 2e5 + 5;
int tc = 1;

void solve() {
     int n; cin>>n;
    vector<int>vec;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        vec.push_back(x);

    }
    sort(vec.begin(),vec.end());
    
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}