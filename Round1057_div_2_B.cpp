#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x like x.find(y)==Not_Exist
using namespace std;
void solve()
{
  int x,y,z;cin>>x>>y>>z;
  int a=0,b=0,c=0;

  for(int i=0;i<31;i++)
  {
   if((x>>i)&1)
   {
      a|=(1<<i);
      b|=(1<<i);
   }
   if((y>>i)&1)
   {
      c|=(1<<i);
      b|=(1<<i);
   }
   if((z>>i)&1)
   {
      a|=(1<<i);
      c|=(1<<i);
   }
  }

  if((a&b)==x&&(b&c)==y&&(a&c)==z) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;


   
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
