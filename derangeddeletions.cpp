#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
  int n;cin>>n;
  vector<int> arr(n);
 
  for(int i=0;i<n;i++) cin>>arr[i];

  for(int i=0;i<n-1;i++)
  {
    if(arr[i]>arr[i+1])
    {
        cout<<"YES"<<endl<<2<<endl<<arr[i]<<" "<<arr[i+1]<<endl;
        return;
    }
  }

   cout<<"NO"<<endl;

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