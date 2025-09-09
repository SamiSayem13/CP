#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x like x.find(y)==Not_Exist
using namespace std;
void solve()
{

  int sum=0;
  int ovens,operations;cin>>ovens>>operations;
  vector<int>arr(ovens);for(auto &it:arr) cin>>it;
  sort(arr.rbegin(),arr.rend());
  
  int iterations=operations;
  if(ovens==1)
  {
   cout<<operations*arr[0]<<endl;
   return;
  }
  
  for(int i=0;i<ovens;i++)
  {
   if(iterations==0)
   {
      break;
   }
   sum+=arr[i]*iterations;
   iterations--;
  }
  cout<<sum<<endl;



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
