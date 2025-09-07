#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x like x.find(y)==Not_Exist
using namespace std;
void solve()
{
  int n;cin>>n;
  vector<int> a(n);
  vector<int> b;
  vector<int> c;
  for(auto &it:a) cin>>it;

   sort(a.begin(),a.end());
   int cnt=1;
   int chk=a[0];
   
   for(int i=1;i<n;i++)
   {
      if(a[i]==chk) cnt++;
      else break;
   }
   if(cnt==n) 
   {
      cout<<-1<<endl;
      return;
   }



   
   for(int i=0;i<n;i++)
   {
    if(i<cnt)
    {
      b.push_back(a[i]);
    }
    else c.push_back(a[i]);
   }

  cout<<b.size()<<" "<<c.size()<<endl;
  for(auto it:b) cout<<it<<" ";
  cout<<endl;  
  for(auto it:c) cout<<it<<" ";
  cout<<endl; 

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
