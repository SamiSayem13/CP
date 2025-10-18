#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x like x.find(y)==Not_Exist
using namespace std;
void solve()
{
   int n,k;cin>>n>>k;

   string s;cin>>s;
   vector<int> arr(n+1,0);
   int cntz=0;
   int cnto=0;
  int check=0;

   for(int i=0;i<n;i++)
   {

         if(s[i]=='1')
         {
          check++;
          if(check==k)
          {
            cout<<"NO"<<endl;
            return;
          }
         }
         else
         {
          check=0;
         }
      
   }


   int x=1;
   for(int i=0;i<n;i++)
   {
    if(s[i]=='1')
    {
      arr[i]=x;
      x++;
    }
   }


   for(int i=0;i<n;i++)
   {
    if(arr[i]==0)
    {
       arr[i]=x;
       x++;
    }
   }


   cout<<"YES"<<endl;
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
    cout<<endl;

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

