#include<bits/stdc++.h>
using namespace std;
 void solve() {
	int n, x, mihai = 0, bianca = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x% 2 == 0)
			mihai += x;
		else
			bianca  += x;
	}
	if (mihai > bianca) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
}
 
int main() {
 
	int t =1;
	cin>>t;
	while (t--) {
		solve();
	}
    return 0;
}
 