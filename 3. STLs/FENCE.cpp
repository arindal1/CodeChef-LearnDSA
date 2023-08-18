#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M, K;
        cin >> N >> M >> K;

        vector<vector<bool>> field(N + 2, vector<bool>(M + 2, false));

        for (int i = 0; i < K; ++i) {
            int r, c;
            cin >> r >> c;
            field[r][c] = true;
        }

        long long totalFences = 0;

        for (int r = 1; r <= N; ++r) {
            for (int c = 1; c <= M; ++c) {
                if (field[r][c]) {
                    if (!field[r - 1][c])
                        totalFences++;
                    if (!field[r + 1][c])
                        totalFences++;
                    if (!field[r][c - 1])
                        totalFences++;
                    if (!field[r][c + 1])
                        totalFences++;
                }
            }
        }

        cout << totalFences << "\n";
    }

    return 0;
}
