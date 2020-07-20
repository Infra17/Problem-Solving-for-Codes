//A. New Year Transportation
//Problem link : https://codeforces.com/contest/500/problem/A
//Authur : Rahit Saha


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,a,sum=1;
    cin>>n>>t;
    vector<int> v;
    map<int,int> m;
    
    for(auto i=0;i<n-1;i++)
    {
        cin>>a;
        v.push_back(a);
        
    }
    while(t>sum)
    {
        sum+=v[sum-1];
        m[sum]++;
    }
    if(m[t]==0)
    cout<<"NO";
    else
    cout<<"YES";
    
}
