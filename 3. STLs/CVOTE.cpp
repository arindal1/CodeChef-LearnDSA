#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    unordered_map<string, pair<string, int>> chefInfo;
    string chefName, country;
    
    for (int i = 0; i < n; i++) {
        cin >> chefName >> country;
        chefInfo[chefName] = make_pair(country, 0);
    }

    for (int i = 0; i < m; i++) {
        cin >> chefName;
        chefInfo[chefName].second++;
    }

    int maxVotes = -1;
    string winningCountry = "";
    string chefOfTheYear = "";

    for (auto it = chefInfo.begin(); it != chefInfo.end(); ++it) {
        if (it->second.second > maxVotes) {
            maxVotes = it->second.second;
            winningCountry = it->second.first;
            chefOfTheYear = it->first;
        } else if (it->second.second == maxVotes) {
            if (it->second.first < winningCountry) {
                winningCountry = it->second.first;
                chefOfTheYear = it->first;
            }
        }
    }

    cout << winningCountry << "\n" << chefOfTheYear << "\n";
    
    return 0;
}
