#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int goalsA = 0, goalsB = 0;
        int shots = 2 * n;
        int remainingA = n, remainingB = n;

        int earliest_known = shots; 

        for (int i = 0; i < shots; i++) {
            if (i % 2 == 0) {
                goalsA += (s[i] - '0');
                remainingA--;
            } else {
                goalsB += (s[i] - '0');
                remainingB--;
            }

            if ((goalsA > goalsB + remainingB) || (goalsB > goalsA + remainingA)) {
                earliest_known = i + 1;
                break;
            }
        }

        cout << earliest_known << endl;
    }

    return 0;
}
