#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
void solve()
{
   int n,m,p,q;cin>>n>>m>>p>>q;

   if(n%p==0&&(n/p)*q!=m) cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
    


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