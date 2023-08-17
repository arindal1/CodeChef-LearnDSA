#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxDepth = 0, maxDepthPos = -1;
    int maxLength = 0, maxLengthPos = -1;
    stack<int> s;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            s.push(i);
            if (s.size() > maxDepth) {
                maxDepth = s.size();
                maxDepthPos = i + 1;
            }
        } else {
            s.pop();
            if (s.empty()) {
                if (i - maxLengthPos + 1 > maxLength) {
                    maxLength = i - maxLengthPos + 1;
                    maxLengthPos = maxLengthPos;
                }
            }
        }
    }

    cout << maxDepth << " " << maxDepthPos << " " << maxLength << " " << maxLengthPos << endl;

    return 0;
}
