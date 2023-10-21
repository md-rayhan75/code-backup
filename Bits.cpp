#include<iostream>
using namespace std;

int32_t main() {
  int n, m; cin >> n >> m;
  int a[n], b[m];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  // check if every element of b is in a in the same order
  int cur_index = -1; // determines which index we are at (in array a)
  for (int b_index = 0; b_index < m; b_index++) { // check for every element in b
    // find the first occurrence of b[b_index] after the cur_index in array a
    int next_index = -1;
    for (int a_index = cur_index + 1; a_index < n; a_index++) {
      if (a[a_index] == b[b_index]) {
        // found the first occurrence
        next_index = a_index;
        break;
      }
    }
    if (next_index == -1) { // not found any index
      cout << "NO\n";
      return 0;
    }
    else {
      cur_index = next_index; // now check starting after the newly found index
    }
  }
  // every element is found in a, in the same order
  cout << "YES\n";
  return 0;
}
