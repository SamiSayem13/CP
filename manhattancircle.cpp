#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
void solve()
{
   int r,c;cin>>r>>c;
   char arr[r+1][c+1];


   for(int i=1;i<=r;i++)
   {
      for(int j=1;j<=c;j++)
      {
         cin>>arr[i][j];
      }
   }


   int hashcnt=0;
   int row=0;
   int starting=0;
   int ending=0;

   for(int i=1;i<=r;i++)
   {
      int tmpcnt=0;
      int f=0;
      int l=0;
      int fl=1;
      for(int j=1;j<=c;j++)
      {  
         if(arr[i][j]=='#') 
            {
               tmpcnt++;
               if(fl)
               {
                 f=j;
                 fl=0;
               }
               l=j;
            }
      }

      if(tmpcnt>hashcnt)
      {
        hashcnt=tmpcnt;
        row=i; 
        starting=f;
        ending=l;
        {
           
        };
      } 

   }

   cout<<row<<" "<<(starting+ending)/2<<endl;
   

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