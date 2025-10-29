#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x
#define bin2dec(s) bitset<32>(s).to_ulong()
#define dec2bin(n) bitset<32>(n).to_string().substr(bitset<32>(n).to_string().find('1')) // Note if 0 then give error
using namespace std;
void solve()
{

  int n;cin>>n;
  string s;cin>>s;
  int fst=n;
  int lst=-1;
  int cnt=0;
  for(int i=0;i<n;i++)
  {
   if(s[i]=='1')
   {
    cnt++;
    fst=min(fst,i);
    lst=max(lst,i);
   }
  }

  //cout<<fst<<" "<<lst<<endl;

  if(cnt==0) cout<<"YES"<<endl;
  else if(cnt==1) cout<<"NO"<<endl;
  else
  {
    //int icnt=0;
    // for(int i=fst+1;i<=lst-1;i++)
    // {
    //  if(s[i]=='1') cnt++;
    // }

     if(cnt%2==0&&abs(fst-lst)!=1) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
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