#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long max_profit = 0;

        for (int i = 0; i < n; i++) {
            long long s, p, v;
            cin >> s >> p >> v;

            long long profit = (p / (s + 1)) * v;
            max_profit = max(max_profit, profit);
        }

        cout << max_profit << endl;
    }

    return 0;
}
