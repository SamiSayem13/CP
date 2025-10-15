#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x like x.find(y)==Not_Exist
using namespace std;
void solve()
{
   int n,k;cin>>n>>k;

   vector<int> arr(n);
   vector<int> freq(n+1);

   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
      freq[arr[i]]++;
   }
   int cntn=0, cntk=freq[k];
   for(int i=0;i<k;i++)
   {
      if(freq[i]==0) cntn++;
   }

   cout<<max(cntn,cntk)<<endl;

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
