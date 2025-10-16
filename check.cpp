#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos
using namespace std;

void solve() {
    int n, mt;
    cin >> n >> mt;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];

    int left = abs(mt - a[n - 1]);
    int ini = 0, cnt = 0, at = 0;

    for (int i = 0; i < n; i++) {
        int diff = a[i] - ini;
        bool match = ((at + diff) % 2 == b[i]);

        if (match) {
            cnt += diff;
        } else {
            cnt += diff - 1;
            at = 1 - at;
        }

        ini = a[i];
    }

    cout << cnt + left << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
