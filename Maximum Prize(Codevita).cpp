//Problem statement given below
//Author : Infra
//Status : Right Answer
//Author : Infra
//Platform : Codevita
#include<bits/stdc++.h>
using namespace std;
int a[505],n;
int main()
{
   int mx=INT_MIN,p=-1,ans=0;
   cin>>n;

   for(int i=0;i<n;i++)
    {cin>>a[i];
    if(a[i]>mx)
        {
            p=i;mx=a[i];
        }
    }

   for(int i=p-1;i>=1;i--)
        ans+=a[i]*a[p]+a[i-1];
    for(int i=p+1;i<n-1;i++)
        ans+=a[i]*a[p]+a[i+1];
    if(p!=n-1) ans+=a[n-1]*a[p];
    if(p!=0) ans+=a[0]*a[p];
    ans+=a[p];



   cout<<ans;

}

/*
Problem : Maximum Prize
*/
