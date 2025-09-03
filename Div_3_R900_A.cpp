#include<bits/stdc++.h>
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x
using namespace std;
void solve()
{

  int n,k;
  cin>>n>>k;
  vector<int> arr(n);
  for(auto &it:arr) cin>>it;

   for(auto it:arr)
   {
      if(it==k)
      {
         cout<<"YES"<<endl;
         return;
      }
   }
   cout<<"NO"<<endl;
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
