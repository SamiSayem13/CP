#include<bits/stdc++.h>
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x like x.find(y)==Not_Exist
using namespace std;
void solve()
{
  vector<int> s,e;//defining a vector to store starting and ending.
  int f=1;//declaring a flag/
  int n=6;//n stands for number of inputs.
  int num=n;//copying n into num to get input inside loop.
  while(num--)
  {

  int x;cin>>x;
  int y;cin>>y;
  s.push_back(x);//pushing back x into s as starting.
  e.push_back(y);//pushing back y into e as ending.
  }


//using bubble sort to sort starting and ending according to ascending order.
  for(int i=0;i<n-1;i++)
  {
   for(int j=i+1;j<n;j++)
   {
      if(e[i]>e[j])
      {
          swap(e[i],e[j]);
          swap(s[i],s[j]);
      }
   }
  }

  int ending=0;//defining to store the last end.

  for(int i=0;i<n;i++)
  {
   if(f) //printing the first one always.
      {
         cout<<s[i]<<" "<<e[i]<<endl;
         ending=e[i];//storing its ending point to ending variable.
         f=0;
      }
   else
   {
     if(ending<=s[i])//checking if the last end is smaller or equal to the next one starting point
     {
      cout<<s[i]<<" "<<e[i]<<endl;
      ending=e[i];//storing its ending point to ending variable.
     }
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
