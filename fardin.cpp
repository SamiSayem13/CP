#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,check,d,c=0,count=0;cin>>n;
    vector <int> v;
    if(n%7==0||n%4==0)
    {
        cout<<"YES";
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                v.push_back(i);
            }
        }
        for(int i=0;i<v.size();i++)
        {
            while(v[i]!=0)
            {
                c++;
                d=v[i]%10;
                if(d==4||d==7)
                {
                    count++;
                }
                v[i]=v[i]/10;
            }
            if(count==c)
            {
                check=1;
            }
            c=0;count=0;
        }
        if(check==1)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    return 0;
}