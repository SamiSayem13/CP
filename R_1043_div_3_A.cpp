#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 6;
    vector<int> divs;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divs.push_back(i);
            if (i != n / i) {   // avoid duplicate when i*i == n
                divs.push_back(n / i);
            }
        }
    }

    sort(divs.begin(), divs.end());

    for (int d : divs) {
        cout << d << " ";
    }
    return 0;
}
