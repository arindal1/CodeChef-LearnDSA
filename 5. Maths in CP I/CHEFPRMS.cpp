#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

bool isSemiPrime(int n) {
    for (int i = 2; i <= n; ++i) {
        if (n % i == 0 && isPrime(i) && isPrime(n / i) && i != n / i) {
            return true;
        }
    }
    return false;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        bool found = false;

        for (int i = 4; i <= N / 2; ++i) {
            if (isSemiPrime(i) && isSemiPrime(N - i)) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
