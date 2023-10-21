#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++)
    {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        long long count = 0;
        long long consecutive = 1;

        for (int i = 1; i < N; i++)
        {
            if (A[i] == A[i - 1])
            {
                consecutive++;
            }
            else
            {
                count += (consecutive * (consecutive + 1)) / 2;
                consecutive = 1;
            }
        }

        count += (consecutive * (consecutive + 1)) / 2;

        long long totalSubarrays = static_cast<long long>(N) * (N + 1) / 2;
        long long beautifulSubarrays = totalSubarrays - count;

        cout << "Case " << t << ": " << beautifulSubarrays << endl;
    }

    return 0;
}