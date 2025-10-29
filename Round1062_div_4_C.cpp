#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x
#define bin2dec(s) bitset<32>(s).to_ulong()
#define dec2bin(n) bitset<32>(n).to_string().substr(bitset<32>(n).to_string().find('1')) // Note if 0 then give error
using namespace std;
void solve()
{
     int n;cin>>n;
     vector<int> arr;
     int odd=0;
     int even=0;
     for(int i=0;i<n;i++)
     {
        int x;cin>>x;
        if(x%2==0) even++;
        else odd++;
        arr.push_back(x);
     }

     if(even==0||odd==0)
     {
          for(auto it:arr) cout<<it<<" ";
               cout<<endl;
     }
     else
     {
          sort(arr.begin(),arr.end());
          for(auto it:arr) cout<<it<<" ";
               cout<<endl;
     }




}

int32_t main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int t;cin>>t;
     while(t--) solve();


    return 0;
}