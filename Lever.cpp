#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
void solve()
{
   int n;cin>>n;
   vector<int> arr1(n+1);
   vector<int> arr2(n+1);
   

   for(int i=1;i<=n;i++) cin>>arr1[i];
   for(int i=1;i<=n;i++) cin>>arr2[i];

      int cnt=0;

   for(int i=1;i<=n;i++)
   {
      cnt+=max(0ll,arr1[i]-arr2[i]);
   }


   cout<<cnt+1<<endl;

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