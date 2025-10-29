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
   for(auto &it:arr) 
     {
          cin>>it;
     }
    //sort(arr.begin(),arr.end());
    // for(auto it:arr) cout<<it<<" ";
    //  cout<<endl;
    map<char,int> mp;

    for(char i='a';i<='z';i++) mp[i]=0;

     // for(auto it:mp) cout<<it.first<<" ";
     //      cout<<endl;


     for(int i=0;i<n;i++)
     {
          for(auto &it:mp)
          {
               if(arr[i]==it.second) {cout<<it.first;it.second++;break;}
          }
     }
     cout<<endl;

}

int32_t main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int t;cin>>t;
     while(t--) solve();


    return 0;
}