#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x like x.find(y)==Not_Exist
using namespace std;
void solve()
{
   int n;cin>>n;
   vector<int> arr(n);
   vector<int> arr1(n+1);
   vector<int> res;

  

  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    arr1[i+1]=arr[i];
  }


  sort(arr1.begin(),arr1.end());
  reverse(arr1.begin(),arr1.end());

  // for(auto it:arr1) cout<<it<<" ";
  //   cout<<endl;

  for(int i=0;i<n;i++)
  {
    res.push_back(arr1[arr[i]-1]);
  }

  for(auto it:res) cout<<it<<" ";
    cout<<endl;





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

