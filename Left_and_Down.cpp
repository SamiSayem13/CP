#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x like x.find(y)==Not_Exist
using namespace std;
void solve()
{

   int a,b,k;cin>>a>>b>>k;

    int g=__gcd(a,b);
    cout<<a<<endl;
    cout<<b*2<<endl;
   
   // if(a<=k&&b<=k) cout<<1<<endl;
   // else if(max(a/g,b/g)<=k) cout<<1<<endl;
   // else
   // {
   //    // int maxi=max(a,b);
   //    // int mini=min(a,b);

   //    // int gap=maxi-mini;
   //    // maxi-=mini;
   //    cout<<2<<endl;
   // }

   // // else if(max(a,b)%min(a,b)==0&&min(a,b)!=1&&min(a,b)<=k) cout<<1<<endl;
   // // else cout<<2<<endl;

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

