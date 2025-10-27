#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x
using namespace std;
void solve()
{
    int n,k;cin>>n>>k;
    string s;cin>>s;
    s=string(k-1,'0')+s;

    //cout<<s<<endl;
    n=s.size();
    int i=0;
    int cnt=0;
    int f=1;

    for(int i=0;i<n;i+=k)
   {
       string s1=s.substr(i,k-1);
       int one=count(s1.begin(),s1.end(),'1');
       if(one<2) cnt++;
   }

  
   if(f)cout<<cnt<<endl;
   else cout<<0<<endl;
    
    



}

int32_t main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int t;cin>>t;
     while(t--) solve();


    return 0;
}
