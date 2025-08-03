#include<bits/stdc++.h>
using namespace std;
#define int long long 
//#define nl endl
 
void solve()
{
   int n;cin>>n;
   vector<int>arr(n);
   int median=((n+1)/2)-1;

   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
      arr[i]=abs(arr[i]);
   }
   int f1=arr[0];

   sort(arr.begin(),arr.end());
   int cnt=0;


   for(int i=0;i<n;i++) if(arr[i]>f1) cnt++;

      if(cnt>=median) cout<<"YES"<<endl;
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