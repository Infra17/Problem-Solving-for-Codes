//problem: length of largest substring with no repeating element in O(N)
//Infosys 8 lacs Interview question
//Author : Infra

#include <bits/stdc++.h>

using namespace std;

int fun(string s)
{
    int n=s.length(),ans=0;
    vector<int> a(n,0);
    unordered_map<char,int> p;
    for(int i=1;i<n;i++)p[s[i]]=-1;
    a[0]=1;
    p[s[0]]=0;
    for(int i=1;i<n;i++)
    {
        if(p[s[i]] !=-1) {a[i]=i-p[s[i]];}
        else a[i]=1+a[i-1];
        p[s[i]]=i;
        
        //cout<<i<<" "<<a[i]<<" "<<s[i]<<endl;
        
        if(ans<a[i])
        ans=a[i];
    }
    
    return ans;
}

int main()
{
    string s;
    cin>>s;
    if(s.length()==1 || s.length()==0) {cout<<s.length();return 0;}
    cout<<fun(s);
}
