#include <iostream>
#include <string>
#include <stack>
using namespace std;

int longestValidPrefix(const string& expression) {
    stack<char> s;
    int maxLength = 0;
    
    for (char c : expression) {
        if (c == '<') {
            s.push(c);
        } else if (!s.empty() && c == '>') {
            s.pop();
            maxLength += 2;
        } else {
            break; 
        }
    }
    
    return maxLength;
}

int main() {
    int t;
    cin >> t; 
    
    cin.ignore();
    
    for (int i = 0; i < t; ++i) {
        string expression;
        getline(cin, expression);
        
        int result = longestValidPrefix(expression);
        cout << result << endl;
    }
    
    return 0;
}
