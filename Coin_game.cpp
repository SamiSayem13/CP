#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x
using namespace std;
void solve()
{
   int n;cin>>n;
   string s;cin>>s;


   if(n==1)
   {
      if(s[0]=='U')
      {
         cout<<"YES"<<endl;
         return;
      }
      else cout<<"NO"<<endl;
      return;
   }
   else if(n==2)
   {
      if(s[0]=='U'&&s[1]=='D')
      {
         cout<<"YES"<<endl;
         return;
      }
      else if(s[0]=='D'&&s[1]=='U')
      {
         cout<<"YES"<<endl;
         return;
      }
      else if(s[0]=='U'&&s[1]=='U')
      {
         cout<<"NO"<<endl;
         return;
      }
      else if(s[0]=='D'&&s[1]=='D')
      {
         cout<<"NO"<<endl;
         return;
      }
   }
   else
   {  
      int cnt=0;
      for(auto it:s)
      {
         if(it=='U') cnt++;
      }


      if(cnt&1) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
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
