#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long budgets[n];
    for (int i = 0; i < n; i++) {
        cin >> budgets[i];
    }
    
    sort(budgets, budgets + n);
    
    long long maxRevenue = 0;
    for (int i = 0; i < n; i++) {
        maxRevenue = max(maxRevenue, budgets[i] * (n - i));
    }
    
    cout << maxRevenue << endl;

    return 0;
}
