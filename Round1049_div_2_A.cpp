#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x like x.find(y)==Not_Exist
using namespace std;
void solve()
{
  int n;cin>>n;
  string s;cin>>s;
  string s1=s;
  sort(s.begin(),s.end());
  int cnt=0;

  for(int i=0;i<n;i++)
  {
    if(s1[i]!=s[i]) cnt++;
  }

  cout<<cnt/2<<endl;
   
}

int32_t main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int t;cin>>t;
     while(t--)
     {
        solve();
     }


    return 0;
}
