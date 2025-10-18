#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x like x.find(y)==Not_Exist
using namespace std;
void solve()
{

   int n;cin>>n;
   vector<int>arr;
   int p=10;

   while(p+1<=n)
   {
      if(n%(p+1)==0) arr.push_back(n/(p+1));
      p*=10;
   }

   sort(arr.begin(),arr.end());
   cout<<arr.size()<<endl;
   

   for(auto it:arr) cout<<it<<" ";
      if(arr.size())cout<<endl;


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

