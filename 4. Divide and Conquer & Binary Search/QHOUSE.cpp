#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool ask(int x, int y) {
    cout << "? " << x << " " << y << endl;
    cout.flush();

    string response;
    cin >> response;

    return response == "YES";
}

int main() {
    vector<pair<int, int>> vertices;

    for (int x = -1000; x <= 1000; ++x) {
        if (ask(x, 0)) {
            vertices.emplace_back(x, 0);
            break;
        }
    }

    int left = vertices[0].first;
    int right = vertices[0].first;

    for (int x = -1000; x <= 1000; ++x) {
        if (ask(x, 1000)) {
            left = min(left, x);
            right = max(right, x);
        }
    }

    int base = right - left;
    int height = 0;

    for (int y = 1; y <= 1000; ++y) {
        if (ask(left, y)) {
            height = y;
            break;
        }
    }

    int area = base * height / 2;

    cout << "! " << area << endl;
    cout.flush();

    return 0;
}

//NOTE: Submissions for this problem was disabled, so I ran this in my VSCode IDE.
