#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int L, B;
        cin >> L >> B;
        
        int gcd = 1;
        for (int i = 1; i <= L && i <= B; ++i) {
            if (L % i == 0 && B % i == 0) {
                gcd = i;
            }
        }
        
        int max_side = gcd;
        
        cout << max_side << endl;
    }
    
    return 0;
}
