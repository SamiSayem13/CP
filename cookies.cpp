#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int ch, eat, survive;
    cin >> ch >> eat >> survive;

    if (eat > ch) {
        cout << -1 << "\n";
        return;
    }

    int total_need = survive * eat;
    int max_buy = survive - survive / 7;

    if (total_need > max_buy * ch) {
        cout << -1 << "\n";
        return;
    }

    int ans = (total_need + ch - 1) / ch; 
    cout << ans << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
