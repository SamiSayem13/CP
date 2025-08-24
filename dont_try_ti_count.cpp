#include<bits/stdc++.h>
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x
using namespace std;
void solve()
{
  int a,b;cin>>a>>b;
  string s1,s2;cin>>s1>>s2;
  int loop=0;
  
  if(s1==s2) 
    {
        cout<<0<<endl;
        return;
    }

    
    for(int k=0;k<6;k++)
    {
       if(s1.find(s2)!=Not_Exist)
       {
        cout<<k<<endl;
        return;
       }
        s1+=s1;
    }
    cout<<-1<<endl; 
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
