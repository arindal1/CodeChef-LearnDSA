#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int K, Q;
        cin >> K >> Q;

        vector<long long> motivation(K);
        vector<long long> satisfaction(K);

        for (int i = 0; i < K; ++i) {
            cin >> motivation[i];
        }

        for (int i = 0; i < K; ++i) {
            cin >> satisfaction[i];
        }

        vector<long long> sums;

        for (int i = 0; i < K; ++i) {
            for (int j = 0; j < K; ++j) {
                sums.push_back(motivation[i] + satisfaction[j]);
            }
        }

        sort(sums.begin(), sums.end());

        for (int i = 0; i < Q; ++i) {
            int qi;
            cin >> qi;
            cout << sums[qi - 1] << endl;
        }
    }

    return 0;
}
