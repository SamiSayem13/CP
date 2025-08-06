#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
void solve()
{
    int n,op;cin>>n>>op;
    vector<int>arr(n);

    for(int i=0;i<n;i++) cin>>arr[i];


    int maxi=*max_element(arr.begin(),arr.end());

    for(int i=0;i<op;i++)
   {
        char c;
        int l,r;
        cin>>c>>l>>r;

        if(l<=maxi&&maxi<=r)
        {
         if(c=='+')
         {
            maxi++;
            cout<<maxi<<" ";
         }
         else
         {
            maxi--;
            cout<<maxi<<" ";
         }
        } 
         else
         {
            cout<<maxi<<" ";
         }  
   }


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