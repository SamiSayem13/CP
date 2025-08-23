#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
  int a,b;cin>>a>>b;
  string s1,s2;cin>>s1>>s2;
  
  if(s1==s2) cout<<0<<endl;
  else
  {
    int n=s1.size();
    while(n<=25)
    {
        s1+=s1;
    }
    cout<<s1<<endl;
    cout<<s2<<endl;
  }
  
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
