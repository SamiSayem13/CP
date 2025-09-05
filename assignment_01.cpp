#include<bits/stdc++.h>
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x like x.find(y)==Not_Exist
using namespace std;
void solve()
{
  multiset<int> ms;//using multiset so that i can get the sorted values automatically.

  while(true)
   {
      int x;cin>>x;

      if(x==0) return;
      else if(x>0) ms.insert(x);
      else if(x==-1)
      {
         vector<int> v(ms.begin(),ms.end());//copying the multiset to vector so that i can get the median easily.
         int median=v[(v.size()-1)/2];//finding the median from this part.
         cout<<median<<" ";
         ms.erase(ms.find(median));//erasing part of the median from the multiset.

      }
   }

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
