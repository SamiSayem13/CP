#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x
using namespace std;
void solve()
{
  int a,b,c,d;cin>>a>>b>>c>>d;
  vector<int> a_to_b;

  for(int i=min(a,b);i<=max(a,b);i++) a_to_b.push_back(i);

  // sort(a_to_b.begin(),a_to_b.end());
  // for(auto it:a_to_b) cout<<it<<" ";
  //  cout<<endl;
  int fc=0;
  int fd=0;

  for(int i=0;i<a_to_b.size();i++)
  {
   if(a_to_b[i]==c)
   {
      fc=1;
   }
   if(a_to_b[i]==d)
   {
      fd=1;
   }

  }

  if(fc&&fd) cout<<"NO"<<endl;
  else if(fc==0&&fd==0) cout<<"NO"<<endl;
  else cout<<"YES"<<endl;

}

int32_t main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int t;cin>>t;
     while(t--) solve();


    return 0;
}
