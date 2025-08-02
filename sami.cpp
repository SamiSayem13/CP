#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;
    cin >> x;

    while(x--) 
    {
        int count = 0;
        string s;
        cin>>s;

        for (char item : s) {
            if (isdigit(item)) {
                count++;
            } else if (item != 'N' && item != 'W' && item != 'D' && !isdigit(item)) {
                count++;
            }
        }

        int over = count / 6;
        int ball = count % 6;

        if (over != 0 && ball == 0) {
            cout << over << " OVER" << endl;
        } else if (over != 0 && ball != 0) {
            cout << over << " OVER " << ball << " BALL" << endl;
        } else {
            cout << ball << " BALLS" << endl;
        }
    }

    return 0;
}
