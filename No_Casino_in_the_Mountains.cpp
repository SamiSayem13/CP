#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
  int n,hg;cin>>n>>hg;
  vector<int>arr;
  int cnt=0;
  int res=0;
  for(int i=0;i<n;i++) cin>>arr[i];
  
  for(int i=0;i<n;i++)
  {
    if(arr[i]==0) cnt++;
    else cnt=0;

    if(cnt==hg)
    {
        res++;
        i++;
    }       
  }

  cout<<res<<endl;
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}