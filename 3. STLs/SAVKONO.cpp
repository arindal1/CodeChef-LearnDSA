#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, z;
        cin >> n >> z;
        
        vector<int> powers(n);
        for (int i = 0; i < n; i++) {
            cin >> powers[i];
        }
        
        sort(powers.rbegin(), powers.rend());
        
        int attacks = 0;
        int currentStrength = z;
        bool success = true;
        
        for (int i = 0; i < n; i++) {
            attacks++;
            currentStrength -= powers[i];
            powers[i] /= 2;
            
            if (currentStrength <= 0) {
                success = true;
                break;
            }
            
            if (powers[i] <= 0) {
                success = false;
                break;
            }
        }
        
        if (success) {
            cout << attacks << endl;
        } else {
            cout << "Evacuate" << endl;
        }
    }
    
    return 0;
}
