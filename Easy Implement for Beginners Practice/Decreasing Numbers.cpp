#include<bits/stdc++.h>
using namespace std;
int ans;
unordered_map<string,int> m;
void func(int a,int l,string s,int z,int p)
{
    if(s!="")
    if(a>=stoi(s) && m[s]==0) 
    {
        //cout<<s<<endl;
    m[s]==1;
    ans++;}
    if(z==l) {
     return; 
    }
    for(int i=p;i>=0;i--)
    func(a,l,s+to_string(i),z+1,i);

}


int main()
{
    string s;
    cin>>s;ans=0;
    int l=s.length();
    func(stoi(s),l,"",0,9);
    cout<<ans;
}
/*
Decreasing Numbers
A non-increasing subsequence is a sequence in which each subsequent element is not greater than the previous element.
You are given a number N. Calculate the number of numbers <= N whose decimal representation forms a non-increasing subsequence.
Example – 531 has a non-increasing decimal representation while 591 does not have a non-increasing decimal representation because 5<9.
*/
