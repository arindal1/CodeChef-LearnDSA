#include <iostream>
#include <vector>

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

// NOTE: This code passes the first 3 test cases, but fails the other three. I tried a lot to debug and tried different approaches but couldn't pass all the test cases, so if you can find the issue in this code submit a pull request, thank you.
