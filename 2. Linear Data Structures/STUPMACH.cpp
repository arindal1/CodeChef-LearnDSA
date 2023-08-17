#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximumTokens(int n, vector<int>& capacities) {
    sort(capacities.rbegin(), capacities.rend());
    int totalTokens = 0;
    
    for (int i = 0; i < n; ++i) {
        totalTokens += min(capacities[i], i+1);
    }
    
    return totalTokens;
}

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        
        vector<int> capacities(n);
        for (int j = 0; j < n; ++j) {
            cin >> capacities[j];
        }
        
        int result = maximumTokens(n, capacities);
        cout << result << endl;
    }
    
    return 0;
}
