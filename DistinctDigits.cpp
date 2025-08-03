#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
void solve()
{

   int l,r;cin>>l>>r;
 


   for(int i=l;i<=r;i++)
   {
      vector<int> v(10,0);
      string s=to_string(i);
      int flag=1;
      for(int j=0;j<s.size();j++)
      {
         int num=s[j]-'0';
         v[num]++;
         if(v[num]>1)
            {
               flag=0;
               break;
            }
      }
      if(flag) 
         {
            cout<<i<<endl;
            return;
         }
   }

   cout<<-1<<endl;




   
}
 
int32_t main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int t=1;
     while(t--)
     {
        solve();
     }
   
     
     return 0;
}