#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int num = 1;
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= 5; ++j) {
            cout << num << " ";
            num++;
        }
        num += 5;
        cout << "\n";
    }

    return 0;
}
