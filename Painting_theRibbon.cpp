#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x
using namespace std;
void solve()
{
    int n,m,k;cin>>n>>m>>k;
    if(m==1) {cout<<"NO"<<endl;return;}
    int f=0;
    int porbe=(n%m==0)?(n/m):(n/m)+1;
    if(n-porbe>k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
     
    




}

int32_t main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int t;cin>>t;
     while(t--) solve();


    return 0;
}
