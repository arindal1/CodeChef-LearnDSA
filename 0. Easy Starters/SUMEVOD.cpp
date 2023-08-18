#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int oddSum = 0;
    int evenSum = 0;

    for (int i = 1; i <= 2 * N; ++i) {
        if (i % 2 == 1) {
            oddSum += i;
        } else {
            evenSum += i;
        }
    }

    cout << oddSum << " " << evenSum << "\n";

    return 0;
}
