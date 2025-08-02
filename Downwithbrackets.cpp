#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
   string s;cin>>s;
   int cnt=0;
    stack<char>stk;
    for(auto it:s)
    {
       if(stk.empty())
       {
        cnt++;
        stk.push(it);
       }
       else if(it=='(') stk.push(it);
       else stk.pop();
    }
     if(cnt>1) cout<<"YES"<<endl;
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