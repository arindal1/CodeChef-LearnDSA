#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int violations = 0;
    int max_so_far = arr[n - 1];
    
    for (int i = n - 2; i >= 0; --i) {
        if (arr[i] > max_so_far) {
            ++violations;
        } else {
            max_so_far = arr[i];
        }
    }
    
    cout << violations << endl;
    
    return 0;
}
