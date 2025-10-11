#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x like x.find(y)==Not_Exist
using namespace std;
void solve()
{

   int n;cin>>n;
   set<int> s;
   for(int i=0;i<n;i++)
   {
      int x;cin>>x;
      s.insert(x);
   } 

   // for(auto it:s) cout<<it<<" ";
   //    cout<<endl;
   cout<<s.size()<<endl;
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
