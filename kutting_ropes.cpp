#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
  int n;cin>>n;
  if(n==0) cout<<1<<endl;
  else if(n==1) cout<<3<<endl;
  else
  {
    int sum=3;
    int res=2;
    for(int i=2;i<=n;i++)
    {
       
        res*=2;
        sum+=res;
    }


    cout<<sum<<endl;
  }

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
