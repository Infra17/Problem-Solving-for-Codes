#include <bits/stdc++.h>
using namespace std;
vector<long long int> ans;
bool digit(long long int a)
{
    while(a)
    {
        long long int b=a%10;
        if(b!=2&&b!=3&&b!=5&&b!=7) return false;
        a/=10;
    }
    return true;
}

void Eratos()
{
    vector<bool> prime(100000,true);
    for(long long int p=2;(p*p)<=2000000000;p++)
    {
        if(prime[p]==true)
        {
            for(long long int i=p*2;i<=100000;i+=p)
            prime[i]=false;
            if(digit(p)) ans.push_back(p);
        }
    }
}

int main()
{
    Eratos();
  int n;cin>>n;
    cout<<ans[n-1];
}

/*
Prime Numbers
Nth prime number that is made of only prime digits, like the series : 2,3,5,7,23,37,..etc.
Function Description
Complete the prime function in the editor below. It has the following parameter(s):

Parameters
Name   Type    Description
n     INTEGER     The number given to Bob.

Return
The function must return an INTEGER denoting the n-th number of the series.

Constraints
• 1 <n<99

Input Format
The first line contains an integer, n.

Sample Cases
Input Output 
5      23

Output Description
It's clear that the fifth prime number is 11, but it consists of two 1 digits
which are not primes. The same applies for 13, 17, and 19, so the fifth
prime number that consists of prime digits only is 23.

*/
