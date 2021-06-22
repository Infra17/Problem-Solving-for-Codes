#include<bits/stdc++.h>
using namespace std;
map<int,int> prime;
vector<int> pr;
int ans=0,n;

int main()
{
    cin>>n;
    prime[0]=1;
    for(int p = 2; p <= n; p++)
    {
        if (prime[p] == 0)
        {
            pr.push_back(p);
            for (int i = p*p; i <= n; i += p)
                prime[i] =1;
        }
    }
    int sum=2;
    for(int i=1;i<pr.size();i++)
    {
        sum+=pr[i];
        if(sum>n) break;
        if(prime[sum]==0) {ans++;}
    }
    cout<<ans;
}
/*

This is a complex version of Consecutive prime sum where the s doesnt start from 2 always, it also shows the numbers that are added up.
#include<bits/stdc++.h>
using namespace std;
map<int,int> prime,an;
vector<int> pr;
int ans=0,n;

void func(int i,int sum,int c,string s)
{
    //cout<<c<<" "<<sum <<" "<<prime[sum]<<endl;
    if(c>1  && sum<=n && prime[sum]==0 && an[sum]==0)
    {ans++;an[sum]=1;
    cout<<sum<<" = "<<s<<endl;
    }
    if(i==pr.size()) return;
    func(i+1,0,0,"");
    func(i+1,pr[i],1,to_string(pr[i]));
    if(sum>n/2) return;
    func(i+1,sum+pr[i],c+1,s+" + "+to_string(pr[i]));
}

int main()
{
    cin>>n;
    prime[0]=1;
    for(int p = 2; p <= n; p++)
    {
        if (prime[p] == 0)
        {
            pr.push_back(p);
            for (int i = p*p; i <= n; i += p)
                prime[i] =1;
        }
    }
    func(0,0,0,"");
    cout<<ans;
}

*/

/*
Consecutive Prime Sum Problem

Some prime numbers can be expressed as a sum of other consecutive prime numbers. For example 5 = 2 + 3, 17 = 2 + 3 + 5 + 7, 41 = 2 + 3 + 5 + 7 + 11 + 13. Your task is to find out how many prime numbers which satisfy this property are present in the range 3 to N subject to a constraint that summation should always start with number 2.
Write code to find out the number of prime numbers that satisfy the above-mentioned property in a given range.

Input Format: First line contains a number N
Output Format: Print the total number of all such prime numbers which are less than or equal to N.
Constraints: 2<N<=12,000,000,000
*/
