#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
void solve()
{ 

  string s;cin>>s;

  int num=stoi(s);

  vector<int>arr={44,47,74,77};

  if(num%4==0||num%7==0)
  {
   cout<<"YES"<<endl;
   return;
  }
  else
  {
   for(int i=0;i<arr.size();i++)
   {
      if(num%arr[i]==0)
      {
        cout<<"YES"<<endl;
        return;
      }
   }
  }

   for(int i=0;i<s.size();i++)
      {
         int x=s[i]-'0';
         if(x!=4&&x!=7)
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
     int t=1;
     while(t--)
     {
        solve();
     }
   
     
     return 0;
}