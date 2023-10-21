#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t= 0; t < T; t++) {
        string s;
        cin >> s;

        int overs = 0;
        int balls = 0;
        int runs = 0;
        int wickets = 0;

        for (char ball : s) {
            if (ball == 'W') {
                wickets++;
                balls++;
            } else {
                runs += ball - '0';
                balls++;
            }

            if (balls == 6) {
                overs++;
                balls = 0;
            }
        }

        cout << "Case " << t << ": " << overs << "." << balls << " over(s) " << runs << " run(s) " << wickets << " wicket(s)" << endl;
    }

    return 0;
}
