#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x
using namespace std;
void solve()
{
  int n;cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];

   vector<int> narr;

   narr.push_back(arr[0]);
   for(int i=1;i<n;i++)
   {
      if(arr[i-1]<=arr[i])
      {
         narr.push_back(arr[i]);
      }
      else
      {
        narr.push_back(arr[i]);
        narr.push_back(arr[i]);
      }
   }
   cout<<narr.size()<<endl;
   for(auto it:narr) cout<<it<<" ";
      cout<<endl;

}

int32_t main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int t;cin>>t;
     while(t--) solve();


    return 0;
}
