#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
	bool flag = false;
	for (auto i = s.begin(); i!= s.end(); i++) {
		if (*i == '0') {
			s.erase(i);
			flag = true;
			break;
		}
 
	}
	if (!flag) {
		s.erase(s.begin());
	}
    cout << s << endl;
    return 0;
}
    