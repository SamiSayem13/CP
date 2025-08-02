#include<bits/stdc++.h>
using namespace std;
#define int long long 
//#define nl endl
 
void solve()
{
   int n;cin>>n;
   vector<int>arr(n+100);

   for(int i=1;i<=n;i++)
   {
      cin>>arr[i];
      arr[i]=abs(arr[i]);
   }


   int mn=arr[1];
   int ceiling=(n+1)/2;
   int f=0;
   sort(arr.begin()+1,arr.begin()+n+1);

   for(int i=1;i<=ceiling;i++)
   {
      if(arr[i]==mn)
      {
         f=1;
         break;
      }
   }

   // cout<<"position of :"<<mn<<endl<<index<<endl;

   // for(auto it:arr) cout<<it<<" ";
   //    cout<<endl;

   
   if(f==1 || (n%2==0&&arr[n/2+1]==mn))
   {
      cout<<"YES"<<endl;
   }
   else cout<<"NO"<<endl;
   
















   // if(check<left) cout<<"YES"<<endl;
   // else cout<<"NO"<<endl;

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