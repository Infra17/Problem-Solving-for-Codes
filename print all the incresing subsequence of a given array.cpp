//problem: print all the incresing subsequence of a given array
//Infosys 8 lacs Interview question
//Author : Infra

#include <bits/stdc++.h>

using namespace std;
int n;
vector<int> v(10000); 
vector<string> vs;
unordered_map<string,int> m;
void fun(int i,string s,int j)
{
    if(i==n) {if(s.length()>1 && m[s]==0) vs.push_back(s);m[s]=1;return;}
    string s1=s;
    fun(i+1,s,j);
    if(v[i]>j)
    {
        s1+=v[i]+'0';
        fun(i+1,s1,v[i]);
    }
    if(s.length()>1&&m[s]==0)
    {vs.push_back(s);m[s]++;}
}

int main()
{
    cin>>n;string s;
    for(int i=0;i<n;i++)cin>>v[i];
       for(int i=0;i<n;i++)
        {s=v[i]+'0';fun(i,s,v[i]);}
    ;
    for(int i=0;i<vs.size();i++)
    cout<<vs[i]<<endl;
}
