#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
void solve()
{ 
   vector<int> arr(3);
   cin>>arr[0]>>arr[1]>>arr[2];
   sort(arr.begin(),arr.end());


   int sum=(arr[0]+arr[1]+arr[2])%2;
   int asum=(arr[0]+arr[1]+arr[2])/2;
   if(sum)
   {
     cout<<-1<<endl;
   }
   else if(arr[0]+arr[1]<arr[2]) cout<<arr[0]+arr[1]<<endl;
   else cout<<asum<<endl;
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