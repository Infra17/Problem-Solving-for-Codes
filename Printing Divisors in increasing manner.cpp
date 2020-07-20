//Problem statement given below
//Author : Infra
#include <bits/stdc++.h>
using namespace std;
map<int,int> m1,m2;
int main()
{
    int n,a=0;
    cin>>n;
   
    cout<<1<<" ";
    if(n&1)
    for(int i=3;i<sqrt(n);i+=2)
    {
        if(n%i==0)
            {
                m1[a]=i;
                m2[a]=n/i;
                a++;
            }
    }
    else
        for(int i=2;i<sqrt(n);i++)
    {

        if(n%i==0)
            {
                m1[a]=i;
                m2[a]=n/i;
                a++;
            }
    }
    for(int i=0;i<a;i++)
    cout<<m1[i]<<" ";
    if(floor(sqrt(n))==ceil(sqrt(n)))
        cout<<sqrt(n)<<" ";
    else
        cout<<"\b";
    for(int i=0;i<a;i++)
    cout<<" "<<m2[a-i-1];
    cout<<" "<<n;
}
/*Problem Description
Question -: Print a line containing all the divisors in increasing order separated by space.

Input Format: The first line of input contains an integer ‘N’ denoting the number.

Output Format: Print a line containing all the divisors in increasing order separated by space.

Constraints:
1 <= N <= 10^8

S.no	Input	Output	 
1.      	10	    1 2 5 10
2.        70.   1 2 5 7 10 14 35 70*/
