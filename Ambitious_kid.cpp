#include<bits/stdc++.h>
#include<windows.h>
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x
using namespace std;
void solve()
{
 int n;cin>>n;
 vector<int>arr(n);

 for(auto &it:arr) cin>>it;

 int comp=abs(arr[0]);

  if(n==1) cout<<abs(arr[0])<<endl;
  else if(n==2) cout<<min(abs(arr[0]),abs(arr[1]))<<endl;
  else
  {

   for(int i=1;i<n;i++)
   {
    comp=min(comp,abs(arr[i]));
   }
   cout<<comp<<endl;

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
