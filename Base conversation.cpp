#include <bits/stdc++.h>

using namespace std;

void f(int n) {
	int rem;
	if(n == 0)
		return;
	rem = n % 2;
	f(n/2);
	cout<<rem;
}

int main() 
{
    
	int t, n;
	cin>> t;
	while(t--) {	
		cin>>n;
		f(n);
		cout<<endl;
	}
    return 0;
}