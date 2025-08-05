#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
void solve()
{
   int x;cin>>x;
   if(x%2==0)
   {
      int a,b;
      a=(x/2)-1;
      b=(x/2);

      cout<<a<<" "<<b<<" "<<1<<endl;
   }
   else
   {
      int a,b;
      a=(x/2)-1;
      b=(x/2)+1;
      if(a%2==0&&b%2==0)
      {
         a-=1;
         b+=1;
      }
      cout<<a<<" "<<b<<" "<<1<<endl;
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