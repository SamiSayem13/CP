#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x like x.find(y)==Not_Exist
using namespace std;
void solve()
{
   int n;cin>>n;
   vector<int> arr(n);
   for(auto &it:arr) cin>>it;

      if(!is_sorted(arr.begin(),arr.end())) cout<<0<<endl;
      else
      {
           vector<int>arr1;
           arr1.push_back(-1);
           arr1.insert(arr1.end(),arr.begin(),arr.end());

           for(auto it:arr1) cout<<it<<" ";
           cout<<endl;
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
