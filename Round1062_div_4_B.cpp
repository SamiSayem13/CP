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
     string s;cin>>s;
     string s1;cin>>s1;
     map<char,int> mp;
     for(auto it:s) mp[it]++;
     for(auto it:s1) mp[it]--;

          for(auto it:mp)
          {
               if(it.second<0)
               {
                    cout<<"NO"<<endl;
                    return;
               }
          }

          cout<<"YES"<<endl;


}

int32_t main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int t;cin>>t;
     while(t--) solve();


    return 0;
}