#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
void solve()
{
    int n,k;cin>>n>>k;
    if(n==1)
    {
      cout<<0<<endl;
    }
    else if(n<=k)
    {
      cout<<1<<endl;
    }
    else
    {
      int cnt=0;
      k--;
      while(n>=2)
      {
        n-=k;
        cnt++;
      }

      cout<<cnt<<endl;
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