#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
void solve()
{ 
  string s;cin>>s;
  string s1="hello";
  int n=s.size();
  int x=0;
  int cnt=0;


  for(int i=0;i<n;i++)
  {
     if(s[i]==s1[x])
     {
      cnt++;
      x++;
     }
  }

  if(cnt==5) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
 

       
}
 
int32_t main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int t=1;
     while(t--)
     {
        solve();
     }
   
     
     return 0;
}