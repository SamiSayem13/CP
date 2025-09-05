#include<bits/stdc++.h>
#define int long long
#define Not_Exist string::npos //x.find(y) find y inside x like x.find(y)==Not_Exist
using namespace std;
void solve()
{
  vector<pair<int,int>> item={{60,10},{100,20},{120,30}};  
  int capacity=50;
  int n=item.size();//calculate the numbers of pairs using vector.


  vector<double>ratio;//storing the ratio here.
  for(int i=0;i<n;i++) ratio.push_back(item[i].first/item[i].second);//calculating the ratio here.
  
  // using bubble sort to allign the value and weight with the ratio so that i can calculate easily.
  for(int i=0;i<n-1;i++)
  {
   for(int j=i+1;j<n;j++)
   {
      if(ratio[i]<ratio[j])
      {
         swap(ratio[i],ratio[j]);//swapping ratio.
         swap(item[i],item[j]);//based on ration swapping the pairs.
      }
   }
  }

  double value=0;
  vector<int>Weights,Values;//storing the weights and values here so that i can print later.
  int n1,n2;//capture the final value of capacity as n1 and weight as n2.
  int pv=0;//capture the final value from the else condition.
  for(int i=0;i<n;i++)
  {
    int v=item[i].first;//v stands for value.
    int w=item[i].second;//w stands for weight.

    if(w<=capacity)
    {
      value+=v;
      capacity-=w;
      Weights.push_back(w);
      Values.push_back(v);
    }
    else
    {
      n1=capacity;
      n2=w;
      double DivideValue=(double)capacity/w;//calculating the fraction here.
      pv=v;
      value+=v*DivideValue;//doing the sum of fraction here.
      break;
    }
  }
  
  //The printing part based on the qus.
  cout<<"Maximum possible value = "<<value<<" by taking items of weight ";
  for(int i=0;i<Weights.size();i++)
  {
     cout<<Weights[i];
     cout<<" and ";
  }
  cout<<n1/10<<"/"<<n2/10;
  cout<<" Fraction of "<<n2<<" kg. Hence total price will be ";
  for(int i=0;i<Weights.size();i++)
  {
     cout<<Values[i];
     cout<<"+";
  }
  cout<<"("<<n1/10<<"/"<<n2/10<<")"<<"("<<pv<<")"<<"="<<value;

  
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
