#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x
using namespace std;
void solve()
{
   int ss,n;cin>>ss>>n;
   string s;cin>>s;
   vector<int>arr(n);
   vector<int>res;
   int f=0;
  for(int i=0;i<ss;i++)
   {
    if(s[i]=='B')
    {
      f=1;
    }
   }
   


   while(n--)
   {
    int x;cin>>x;
   if(f)
   {
      int cnt=0;
      int z=0;
      while(x>0)
      {

        if(s[z]=='A') x-=1;
        else x/=2;

        cnt++;
        z++;
        if(z==ss) z=0;

      }
      res.push_back(cnt);
      cout<<cnt<<endl;
    }
    else cout<<x<<endl;
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