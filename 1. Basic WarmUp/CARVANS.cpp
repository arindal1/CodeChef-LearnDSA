#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> speeds(n);
        for (int i = 0; i < n; i++) {
            cin >> speeds[i];
        }

        int maxSpeedCars = 1;

        for (int i = 1; i < n; i++) {
            if (speeds[i] <= speeds[i - 1]) {
                maxSpeedCars++;
            } else {
                speeds[i] = speeds[i - 1];
            }
        }

        cout << maxSpeedCars << endl;
    }

    return 0;
}
