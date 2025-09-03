#include<bits/stdc++.h>
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x
using namespace std;
void solve()
{

  int n;cin>>n;
  n--;
  int sum=0;
  for(int i=0;i<n;i++)
  {
   int x;cin>>x;
   sum+=x;
  }
   cout<<-1*sum<<endl;

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
