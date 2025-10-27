#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x
using namespace std;
void solve()
{
    int n;cin>>n;
    set<int> s;
    int maxi=0;

    for(int i=0;i<n;i++)
    {
      int x;cin>>x;
      maxi=max(maxi,x);
      s.insert(x);
    }


   // int res=0;
   // vector<int> odd;
   // vector<int> even;

   // for(auto it:s)
   // {
   //    if(it&1) odd.push_back(it);
   //    else even.push_back(it);
   // }

   // //cout<<res<<endl;
   // //cout<<maxi<<endl;
   //  if(maxi%2!=0&&!even.empty())
   //  {
   //    maxi=even.back();
   //  }
   // for(auto it:even)
   // {
   //    res+=(maxi^it);
   // }
   // for(auto it:odd)
   // {
   //    res+=(maxi^it);
   // }


   // cout<<res<<endl;

   //cout<<maxi<<endl;

    int res=0;

    for(auto it:s)
    {
      res+=(676^it);
    }
    cout<<res<<endl;


}

int32_t main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int t;cin>>t;
     while(t--) solve();


    return 0;
}
