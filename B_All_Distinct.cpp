#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, x;
	cin >> n;
	set<int> s;
    
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		s.insert(x);
	}
	if((n-s.size())%2 == 0)
	{
		cout << s.size() << endl;
	}
	else
	{
		cout << s.size()-1 << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
    return 0;
}