#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
void solve()
{ 
  string s;cin>>s;
  string s1;
  int n=s.size();
  int h=0;
  int e=0;
  int l1=0;
  int l2=0;
  int o=0;

  for(int i=0;i<n;i++)
  {
   if(s[i]=='h'||s[i]=='e'||s[i]=='l'||s[i]=='l'||s[i]=='o')
   {
         if(s[i]=='h'&&h==0) 
         {
            s1+=s[i];
            h=1;
         }
         else if(s[i]=='e'&&h==1&&e==0) 
         {
            s1+=s[i];
            e=1;
         }
         else  if(s[i]=='l'&&h==1&&e==1&&l1==0) 
         {
            s1+=s[i];
            l1=1;
         }
         else if(s[i]=='l'&&h==1&&e==1&&l1==1&&l2==0) 
         {
            s1+=s[i];
            l2=1;
         }
         else if(s[i]=='o'&&h==1&&e==1&&l1==1&&l2==1&&o==0) 
         {
            s1+=s[i];
            o=1;
         }
   }
  }
   cout << h << " " << e << " " << l1 << " " << l2 << " " << o << "\n";

  if(h&&e&&l1&&l2&&o) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
       
}
 
int32_t main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int t=1;
     while(t--)
     {
        solve();
     }
   
     
     return 0;
}