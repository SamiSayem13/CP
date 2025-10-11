#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x like x.find(y)==Not_Exist
using namespace std;
void solve()
{
   int n;cin>>n;
   int a,b;
   vector<int> arr(n);
   for(auto &it:arr) cin>>it;

      if(!is_sorted(arr.begin(),arr.end())) cout<<0<<endl;
      else
      {  
         int diff=1e9;
         for(int i=1;i<n;i++)
            {
              int ch=abs(arr[i-1]-arr[i]);
              if(ch<diff)
              {
               diff=ch;
               a=arr[i-1];
               b=arr[i];
              }
            }

            cout<<(abs(a-b)/2)+1<<endl;
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
