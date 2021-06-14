//Problem statement given below
//Author : Infra
//Status : Right Answer
//Author : Infra
//Platform : Codevita

#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;
#define mod 1000000007

long e_sum(long m,long n,long K,long N)
{
    if(K==1)
    {
       return n;
    }
    else
    {
        return (N-(m-n)*e_sum(m,n,K-1,N)%(1000000007));
    }
}
int main()
{
    long low,high,K,m,n,diff,Out,N,i;
    scanf("%ld",&low);
    scanf("%ld",&high);
    scanf("%ld",&K);
    diff=high-low+1;
    if(diff%2==0)
    {
        m=diff/2;
        n=m;
    }
    else
    {
        if(low%2==0)
        {
            m=(diff-1)/2;
            n=m+1;
        }
        else
        {
            m=(diff+1)/2;
            n=m-1;
        }
    }
    N=m;
    for(i=0;i<K-1;i++)
    {
        N=(N*(m+n))%1000000007;
    }
    Out=e_sum(m,n,K,N)%1000000007;
    printf("%ld",Out);
    return 0;
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
