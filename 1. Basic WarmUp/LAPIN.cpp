#include <iostream>
#include <algorithm>
using namespace std;

bool isLapindrome(string str) {
    int len = str.length();
    
    int freq[26] = {0};
    
    for (int i = 0; i < len / 2; i++) {
        freq[str[i] - 'a']++;
    }
    
    int start = len % 2 == 0 ? len / 2 : len / 2 + 1;
    
    for (int i = start; i < len; i++) {
        freq[str[i] - 'a']--;
    }
    
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string str;
        cin >> str;
        
        if (isLapindrome(str)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
