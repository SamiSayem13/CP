#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x like x.find(y)==Not_Exist
using namespace std;
void solve()
{

   int a,b;cin>>a>>b;
   int check=max(a,b)%min(a,b);
   if(a==b) cout<<0<<endl;
   else if(check==0)
   {
      cout<<1<<endl;
   }
   else cout<<2<<endl;



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
