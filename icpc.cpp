#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        long long nonBeautifulSubarrays = 0;
        int start = 0;

        for (int i = 1; i < N; i++) {
            if (A[i] != A[start]) {
                // Count the number of non-beautiful subarrays ending at position i
                nonBeautifulSubarrays += 1LL * (i - start) * (i - start + 1) / 2;
                start = i;
            }
        }

        // Count the remaining subarray
        nonBeautifulSubarrays += 1LL * (N - start) * (N - start + 1) / 2;

        // Subtract the number of beautiful subarrays from the total
        long long totalSubarrays = 1LL * N * (N + 1) / 2;
        long long beautifulSubarrays = totalSubarrays - nonBeautifulSubarrays;

        cout << "Case " << t << ": " << nonBeautifulSubarrays << endl;
    }

    return 0;
}
