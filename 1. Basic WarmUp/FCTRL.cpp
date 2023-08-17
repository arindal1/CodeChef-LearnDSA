#include <iostream>
using namespace std;

int countTrailingZeros(int n) {
    int count = 0;
    while (n >= 5) {
        n /= 5;
        count += n;
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        cout << countTrailingZeros(n) << endl;
    }

    return 0;
}
