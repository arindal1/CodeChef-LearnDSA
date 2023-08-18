#include <iostream>
#include <stack>
#include <string>

using namespace std;

int getPrecedence(char op) {
    if (op == '^')
        return 3;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    return 0;
}

string infixToPostfix(const string& infix) {
    stack<char> s;
    string postfix;

    for (char c : infix) {
        if (c >= 'A' && c <= 'Z') {
            postfix += c;
        } else if (c == '(') {
            s.push(c);
        } else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop();
        } else {
            while (!s.empty() && getPrecedence(s.top()) >= getPrecedence(c)) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();

    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;
        cin.ignore();

        string infix;
        getline(cin, infix);

        string postfix = infixToPostfix(infix);
        cout << postfix << "\n";
    }

    return 0;
}
