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
     vector<int>arr(n);
     for(auto &it:arr) cin>>it;

    vector<int>pr=
     {
        2,3,5,7,11,13,17,19,23,29,31,
        37,41,43,47,53,59,61,67,71,73
     };


     for(auto it:pr)
     {
          bool check=true;
          for(int i=0;i<n;i++)
          {
               if(arr[i]%it!=0) {check=false;break;}
          }
          
          if(!check){cout<<it<<endl;return;}
     }


     cout<<-1<<endl;





}

int32_t main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int t;cin>>t;
     while(t--) solve();


    return 0;
}