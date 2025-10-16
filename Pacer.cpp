#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x like x.find(y)==Not_Exist
using namespace std;
void solve()
{

   int n,mt;cin>>n>>mt;
   vector<int>a(n,0),b(n,0);
   for(int i=0;i<n;i++) cin>>a[i]>>b[i];
   int left=abs(mt-a[n-1]);


   int ini=0;
   int cnt=0;
   int f=0;
   int at=0;

   for(int i=0;i<n;i++)
   {
      int diff=a[i]-ini;
      //cout<<diff<<endl;
      
      if(at==0)
      {
        if(diff%2==0&&b[i]==0) 
         {
            cnt+=diff;
            at=0;
         }
         else if(diff%2==0&&b[i]==1) 
         {
            cnt+=(diff-1);
            at=1;
         }  
         else if(diff%2!=0&&b[i]==1)
         {
            cnt+=diff;
            at=1;
         }       
         else if(diff%2!=0&&b[i]==0)
         {
            cnt+=(diff-1);
            at=0;
         }
         //cout<<cnt<<endl;
         //cnt=0;
      }
      else if(at==1)
      {
        if(diff%2==0&&b[i]==0) 
         {
            cnt+=(diff-1);
            at=0;
         }
         else if(diff%2==0&&b[i]==1) 
         {
            cnt+=diff;
            at=1;
         }  
         else if(diff%2!=0&&b[i]==1)
         {
            cnt+=(diff-1);
            at=1;
         }       
         else if(diff%2!=0&&b[i]==0)
         {
            cnt+=diff;
            at=0;
         }
         //cout<<cnt<<endl;
         //cnt=0;
      }

     ini=a[i];
   }


      
        cout<<cnt+left<<endl;
      
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




