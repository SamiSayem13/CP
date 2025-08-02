#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n,k;cin>>n>>k;

   string s;cin>>s;

   int onecnt=0;
   int zerocnt=0;

   for(int i=0;i<n;i++)
   {
      if(s[i]=='1') onecnt++;
      else zerocnt++;
   }
    
    int possiblepair=(abs(onecnt-zerocnt))/2;

    if(k<possiblepair) cout<<"NO"<<endl;
    else if((k-possiblepair)%2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
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