#include<bits/stdc++.h>
using namespace std;
int main() {
  int t; cin >> t;
  //int sum=0; 
  while (t--) {

    int a, b, c;
    int sum = 0;
    cin >> a >> b >> c;
    if (a <= 8 and b <= 1 and c <= 1) {
      cout << sum;
    }
    else if (a > 8 and b > 1 and c > 1) {
      sum = 9 + 2 + 2;
    }
    else if (a)
      cout << sum;
    break;
  }

  return 0;
}