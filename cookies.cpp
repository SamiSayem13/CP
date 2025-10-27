#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x
using namespace std;
void solve()
{
  int n;cin>>n;
  vector<int> arr(70);


  arr[0]=1;
  arr[1]=2;
  if(n==0) cout<<1<<endl;
  else if(n==1) cout<<2<<endl;
  else
  {
   int mul=2;
   int cnt=0;
   for(int i=2;i<70;i++)
   {
      arr[i]=arr[i-1]+mul;
      cnt++;
      if(cnt==2)
      {
         mul*=2;
         cnt=0;
      }
   }
     cout<<arr[n]<<endl;
  }

}

int32_t main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int t;cin>>t;
     while(t--) solve();


    return 0;
}
