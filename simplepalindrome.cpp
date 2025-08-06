#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
void solve()
{
        int n;cin>>n;
        string s="aeiou";
        string s1;
        for(int i=0,c=0;i<n;i++,c++)
        {
            if(c==5) c=0;
            s1+=s[c];
        }

        sort(s1.begin(),s1.end());
        cout<<s1<<endl;


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