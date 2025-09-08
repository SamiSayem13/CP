#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x like x.find(y)==Not_Exist
using namespace std;
void solve()
{
  int n;cin>>n;
  vector<int>even;
  vector<int>odd;
  
  for(int i=0;i<n;i++)
  {
    int x;cin>>x;
    if(x%2==0) even.push_back(x);
    else odd.push_back(x);
  }
  int cnte=0;
  int cnto=0;
  for(auto it:even) cnte+=it;  
  for(auto it:odd)  cnto+=it;
    

  if(odd.size()==0) cout<<"YES"<<endl;
  else if(even.size()==0)
  {
    if(odd.size()%2!=0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
  }
  else 
  {
    if(cnte%2==0&&cnto%2==0) cout<<"YES"<<endl;
    else if(cnte%2!=0&&cnto%2!=0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
