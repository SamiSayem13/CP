#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
void solve()
{
   int n;cin>>n;
   string s;cin>>s;
   vector<int> arr(n);
   for(int i=0;i<n;i++)
   {
      arr[i]=s[i]-'0';
   }
   
   vector<int> now;


   int f=1;
   for(int i=0;i<n;i++)
   {
      if(arr[i]==0)
      { 
         if(f)
         {
            now.push_back(0);
            f=0;            
         }
      }
      else 
      {
         now.push_back(1);
         f=1;
      }
   }

   int onecnt=0;
   int zerocnt=0;
   for(auto it:now)
     {
        if(it==1) onecnt++;
        else zerocnt++;
     } 

     if(onecnt==zerocnt) cout<<"NO"<<endl;
     else if(onecnt<zerocnt) cout<<"NO"<<endl;
     else cout<<"YES"<<endl; 
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