#include <bits/stdc++.h>
using namespace std;
int tc = 1;

int main() {
  int t, n;
  cin >> t;
  while (t--) {
      cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

     int count = 0;
    for (int i = 0; i < n; i++) {
      for (int j = i; j < n; j++) {
        int all_equal = 1;
        for (int k = i; k <= j; k++) {
          if (a[k] != a[i]) {
            all_equal = 0;
            break;
          }
        }
        if (!all_equal) {
          count++;
        }
      }
    }

    cout << "Case " << tc++ << ": " << count << endl;;
  }
  return 0;
}