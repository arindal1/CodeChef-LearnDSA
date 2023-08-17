#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int activities;
        string origin;
        cin >> activities >> origin;
        
        int totalLaddus = 0;
        
        for (int i = 0; i < activities; ++i) {
            string activity;
            cin >> activity;
            
            if (activity == "CONTEST_WON") {
                int rank;
                cin >> rank;
                totalLaddus += 300 + max(0, 20 - rank);
            } else if (activity == "TOP_CONTRIBUTOR") {
                totalLaddus += 300;
            } else if (activity == "BUG_FOUND") {
                int severity;
                cin >> severity;
                totalLaddus += severity;
            } else if (activity == "CONTEST_HOSTED") {
                totalLaddus += 50;
            }
        }
        
        int monthlyRedeem = (origin == "INDIAN") ? 200 : 400;
        int months = totalLaddus / monthlyRedeem;
        
        cout << months << endl;
    }

    return 0;
}
