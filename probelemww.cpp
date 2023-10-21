#include<iostream>
#include <algorithm> // for using sort function
using namespace std;

int main() {
  int n; cin >> n;
  int a[n + 1];
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  // solve it using builtin function for now
  sort(a + 1, a + n + 1);
  // sort(a + l, a + r) means sorting from a[l] to a[r - 1]
  // we want to sort from a[1] to a[n], that is: l = 1, r - 1 = n => r = n + 1
  // thats why we use sort(a + 1, a + (n + 1))
  for (int i = 1; i <= n; i++) {
    cout << a[i] << ' ';
  }
  cout << '\n';
  return 0;
}
