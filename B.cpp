#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x
using namespace std;
void solve()
{
    int n1;cin>>n1;
    int num1[n1];
    int freq1[n1];
    for(int i=0;i<n1;i++) cin>>num1[i];
    for(int i=0;i<n1;i++) cin>>freq1[i];
    
    int n2;cin>>n2;
    int num2[n2];
    int freq2[n2];
    for(int i=0;i<n2;i++) cin>>num2[i];
    for(int i=0;i<n2;i++) cin>>freq2[i];



     // for(int i=0;i<n1;i++) cout<<num1[i]<<" "<<freq1[i]<<endl;
     // for(int i=0;i<n2;i++) cout<<num2[i]<<" "<<freq2[i]<<endl;
      vector<int>arr;
      vector<int>arrfreq;
      int g=0;

      for(int i=0;i<n1;i++)
         {
            for(int j=0;j<n2;j++)
            {
               if(num1[i]==num2[j])
               {
                  arr.push_back(num1[i]);
                  arrfreq.push_back(max(freq1[i],freq2[j])-min(freq1[i],freq2[j]));

               }
            }
         }


        for(auto it:arr) cout<<it<<" ";
         cout<<endl;

         //cout<<pow(2,arr.size())<<endl;





   //  for(int i=0;i<n;i++)
   //  {  
   //    int x;cin>>x;
   //     num1[i]=pow(num1[i],x);
   //  }  

   //  int n1;cin>>n1;
   //  int num2[n1];
   //  for(int i=0;i<n1;i++) cin>>num2[i];
   //  for(int i=0;i<n1;i++)
   //  {  
   //    int x;cin>>x;
   //     num2[i]=pow(num2[i],x);
   //  } 



   //  int sum1=1;
   //  int sum2=1;

   // for(auto it:num1) sum1*=it;
   // for(auto it:num2) sum2*=it;

   // int check=sum1/sum2;
   // //cout<<check<<endl;

   // vector<int> divs;
   // set<int> s;


   // for(int i=2;i*i<=check;i++)
   // {
   //    while(check%i==0)
   //    {
   //       divs.push_back(i);
   //       s.insert(i);
   //       check/=i;
   //    }
   // }
   

   // //for(auto it:divs) cout<<it<<" ";


   // if(check>1) 
   //    {
   //       divs.push_back(check);
   //       s.insert(check);
   //    }
   //    int res=pow(2,s.size());

   // cout<<(res%998244353)<<endl;


}

int32_t main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int t=1;
     while(t--) solve();


    return 0;
}
