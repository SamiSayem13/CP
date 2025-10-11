#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x like x.find(y)==Not_Exist
using namespace std;
void solve()
{
  int n,k,x;cin>>n>>k>>x;
  if(k==1&&x==1) cout<<"NO "<<endl;
  else
  {
     if(x!=1)
     {
         cout<<"YES"<<endl;
         cout<<n<<endl;
         for(int i=0;i<n;i++)
         { 
           cout<<1<<" ";
         }
         cout<<endl;
     }
     else if(x==1&&k>=2&&n%2==0)
     {
         cout<<"YES"<<endl;
         cout<<n/2<<endl;
         for(int i=0;i<n/2;i++)
         {
            cout<<2<<" ";
         }
         cout<<endl;
     }
     else
     {
         if(k>2)
         {
            if(n==k&&n!=x) cout<<"YES"<<endl<<1<<endl<<n<<endl;
            else if((n-3)%2==0)
            {
              cout<<"YES"<<endl;
              cout<<1+((n-3)/2)<<endl;
              n-=3;
              cout<<3<<" ";
              for(int i=0;i<n/2;i++)
              {
               cout<<2<<" ";
              }
              cout<<endl;
            }
         }
         else cout<<"NO"<<endl;
     }

  }


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
