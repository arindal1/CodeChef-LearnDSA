#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> radii(n);
        vector<int> topDisks;

        for (int i = 0; i < n; i++) {
            cin >> radii[i];
        }

        topDisks.push_back(radii[0]);

        for (int i = 1; i < n; i++) {
            auto it = upper_bound(topDisks.begin(), topDisks.end(), radii[i]);
            if (it == topDisks.end()) {
                topDisks.push_back(radii[i]);
            } else {
                *it = radii[i];
            }
        }

        cout << topDisks.size() << " ";
        for (int i = 0; i < topDisks.size(); i++) {
            cout << topDisks[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
