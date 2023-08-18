#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N, A, B, K;
        cin >> N >> A >> B >> K;

        long long problemsSolvedByA = N / A;
        long long problemsSolvedByB = N / B;
        long long problemsSolvedByBoth = N / (A * B);

        long long totalProblemsSolved = problemsSolvedByA + problemsSolvedByB - 2 * problemsSolvedByBoth;

        if (totalProblemsSolved >= K) {
            cout << "Win" << endl;
        } else {
            cout << "Lose" << endl;
        }
    }

    return 0;
}
