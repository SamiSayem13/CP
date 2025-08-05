#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
void solve()
{
   int n;cin>>n;
   vector<int>arr(n);

   for(int i=0;i<n;i++) cin>>arr[i];

     

  for(int i=0;i<n-2;i++)
  {
   arr[n-2]=arr[n-2]-arr[i];
  }

  if(arr[n-2]<0) cout<<arr[n-1]+abs(arr[n-2])<<endl;
  else cout<<arr[n-1]-arr[n-2]<<endl;

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