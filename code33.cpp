#include<iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int a[n + 1];
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  // step 1: Find minimum number and its position in the array
  // But what if the there are multiple minimums in the array?
  // Well, that won't happen as in the problem statement it says that
  // "It's guaranteed that all numbers are distinct."
  // learning: ALWAYS read the WHOLE problem statement correctly
  int minimum_number = 1e9, position_of_minimum_number = -1;
  for (int i = 1; i <= n; i++) {
    if (a[i] < minimum_number) { // found a new minimum
      minimum_number = a[i]; // update the minimum number
      position_of_minimum_number = i; // update the position
    }
  }

  // tips: you can debug (find bug in) your code by printing the variables
  // and checking if they are indeed correct or not
  // cout << "position of minimum number = " position_of_minimum_number << '\n';

  // step 2: Find maximum number and its position in the array
  int maximum_number = -1e9, position_of_maximum_number = -1;
  // Notice the appropriate initial values of minimum_number and maximum_number
  for (int i = 1; i <= n; i++) {
    if (a[i] > maximum_number) { // found a new maximum
      maximum_number = a[i]; // update the maximum number
      position_of_maximum_number = i; // update the position
    }
  }

  // Swap minimum number with maximum number.
  // So just swap the elements in the corresponding positions
  swap(a[position_of_minimum_number], a[position_of_maximum_number]);

  for (int i = 1; i <= n; i++) {
    cout << a[i] << ' ';
  }
  cout << '\n';
  return 0;
}
