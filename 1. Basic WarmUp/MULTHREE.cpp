#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long k, d0, d1;
        cin >> k >> d0 >> d1;
        
        long long sum = d0 + d1;
        long long cycle_sum = (2 * sum) % 10 + (4 * sum) % 10 + (8 * sum) % 10 + (6 * sum) % 10;
        
        long long total_cycles = (k - 3) / 4;
        long long total_sum = sum + cycle_sum * total_cycles;
        
        if ((k - 3) % 4 == 1) total_sum += (2 * sum) % 10;
        if ((k - 3) % 4 == 2) total_sum += (2 * sum) % 10 + (4 * sum) % 10;
        if ((k - 3) % 4 == 3) total_sum += (2 * sum) % 10 + (4 * sum) % 10 + (8 * sum) % 10;
        
        if (total_sum % 3 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
