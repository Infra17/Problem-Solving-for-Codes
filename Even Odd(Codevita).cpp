//Problem statement given below
//Author : Infra
//Status : Right Answer
//Author : Infra
//Platform : Codevita

#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;
#define mod 1000000007
int dp[10000];
int fact(int n)
{
    if(dp[n]) return dp[n];
    if(n==0) return 1;
    if(n==1) return dp[n]=1;
    
    return dp[n]=n*fact(n-1) %mod;
}

int comb(int n,int p)
{
    return (int)(fact(n)/(fact(n-p)*fact(p))) ;
}

int main()
{
    int o,e,h,l,k,K;
    cin>>l>>h>>k;K=k;
    int diff=h-l+1;
    if(diff%2==0)
    {
        o=diff/2;
        e=o;
    }
    else
    {
        if(l%2==0)
        {
            o=(diff-1)/2;
            e=o+1;
        }
        else
        {
            o=(diff+1)/2;
            e=o-1;
        }
    }
    int ans=0,i=0;
    while(i<=k)
    {
        ans+=comb(K,i)*((int)pow(e,k-i)% mod)*((int)pow(o,i) % mod);
        i+=2;
    }
    
    cout<<ans%mod;
}

/*
Even Odd
Problem Description
Given a range [low, high] (both inclusive), select K numbers from the range (a number can be chosen multiple times) such that sum of those K numbers is even.
Calculate the number of all such permutations.
As this number can be large, print it modulo (1e9 +7).
Constraints
0 <= low <= high <= 10^9
K <= 10^6.
Input
First line contains two space separated integers denoting low and high respectively
Second line contains a single integer K.
Output
Print a single integer denoting the number of all such permutations
Time Limit
1
Examples
Example 1
Input
4 5
3
Output
4
Explanation
There are 4 valid permutations viz. {4, 4, 4}, {4, 5, 5}, {5, 4, 5} and {5, 5, 4} which sum up to an even number
Example 2
Input
1 10
2
Output
50
Explanation
There are 50 valid permutations viz. {1,1}, {1, 3},.. {1, 9} {2,2}, {2, 4},... {2, 10} . . . {10, 2}, {10, 4},... {10, 10}. These 50 permutations, each sum up to an even number.


*/
