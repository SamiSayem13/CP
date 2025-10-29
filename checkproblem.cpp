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
     vector<int>arr;
     int f=0;
     // vector<int>odd;
     // int ecnt=0;
     // int ocnt=0;
   //  int maxi=1000000000000000000LL;
 
     for(int i=0;i<n;i++)
     {
           int x;cin>>x;
           if(x%2!=0)
           {
              f=1;
           }
          // maxi=max(maxi,x);
           arr.push_back(x);
     }

     if(f) {cout<<2<<endl;return;}
 
 
     sort(arr.begin(),arr.end());
    for(int i=3;i<=1e7+9;i+=2)
    {
     for(int j=0;j<n;j++)
     {
          if(arr[j]%i!=0)
          {
               cout<<i<<endl;
               return;
          }
     }
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