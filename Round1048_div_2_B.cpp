#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x like x.find(y)==Not_Exist
using namespace std;
void solve()
{

  int sum=0;
  int ovens,operations;cin>>ovens>>operations;
  vector<int>arr(ovens);for(auto &it:arr) cin>>it;
  sort(arr.begin(),arr.end());

   if(ovens==1) cout<<arr[0]*operations<<endl;
   else
   {
         if(operations==ovens){
               int it=1;
               for(int i=0;i<ovens;i++)
               {
                sum+=(arr[i]*it);
                it++;
               }
               cout<<sum<<endl;
               return;
         }

         if(operations>ovens){
               int it=2;
               for(int i=0;i<ovens;i++)
               {
                if(i!=ovens-1)sum+=(arr[i]*it);
                else sum+=(arr[i]*(it-1));
                it++;
               }
               int ex=abs(operations-ovens);
               sum+=arr[ovens-1]*ex;
               operations-=ex;               
               cout<<sum<<endl;
               return;
         }
         

         if(operations<ovens){
            int iteration=1;
            for(int i=operations-1;i<ovens;i++)
            {
              sum+=arr[i]*(iteration);
              iteration++;
            }
            cout<<sum<<endl;
            return;
         }

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
