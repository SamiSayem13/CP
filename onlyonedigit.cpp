#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
  string s;
  cin>>s;
  int chk=9;
  for(int i=0;i<s.size();i++)
  {

    int x = s[i]-'0';
    if(x<=chk)
    {
        chk=x;
    }
  }

  cout<<chk<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}