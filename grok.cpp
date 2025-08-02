#include <bits/stdc++.h>
using namespace std;

int results(int x)
{
    string s = to_string(x);
    sort(s.begin(), s.end());
    int mini = s.front() - '0';
    int maxi = s.back() - '0';
    return abs(maxi - mini);
}

void solve()
{
    int a, b;
    cin >> a >> b;
    int ans = INT_MIN;
    int cnt = -1;

    for (int i = a; i <= b; i++)
    {
        string s = to_string(i);
        int maxi = -1, mini = 10;
        for (int j = 0; j < s.size(); j++)
        {
            maxi = max(maxi, s[j] - '0');
            mini = min(mini, s[j] - '0');
        }

        if (maxi - mini == 9)
        {
            cout << i << endl;
            return;
        }
        if (maxi - mini > ans)
        {
            ans = maxi - mini;
            cnt = i;
        }
    }
    cout << cnt << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}