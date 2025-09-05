#include<bits/stdc++.h>
#include<windows.h>
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x
using namespace std;
void solve()
{
  char arr[10+1][10+1];
  int sum[5+1]={0};

  for(int i=1;i<=10;i++)
  {
    for(int j=1;j<=10;j++)
    {
        cin>>arr[i][j];
    }
  }
    int x,y;
    x=1;
    y=10;
    int f=1;   
for(int k=1;k<=5;k++)
{

  for(int i=x;i<=y;i++)
  { 
    for(int j=x;j<=y;j++) if(i==x||i==y||j==x||j==y)  if(arr[i][j]=='X') sum[k]++;
  }
            x++;y--;
}
 int total=0;
 for(int it=1;it<=5;it++)
 {
    total=total+(sum[it]*it);
 }

 cout<<total<<endl;


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
