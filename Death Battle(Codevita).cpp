//Problem statement given below
//Author : Infra
//Status : Right ANswer
//Author : Infra
//Platform : Codevita

#include<bits/stdc++.h>
using namespace std;
int dp[20];
long gcd(int a, int b)
{
if (a == 0)
return b;
else if (b == 0)
return a;
if (a < b)
return gcd(a, b % a);
else
return gcd(b, a % b);
}
int fac(int n)
{
if(dp[n])
return dp[n];
dp[n]=n*fac(n-1);
return dp[n];
}
int fu(int A,int H,int L1,int L2,int M,int C)
{
int up=0,low=0;
if(H-(A+C)*M >0||L1==0)
{
cout<<"RIP "<<endl;
return 0;
}
int der=H-A*M;
if(der<=0)
{
cout<<1<<endl;
return 0;
}
int wa=floor((der-1)/C) +1;
//cout<<wa<<" wa";
for(int j=wa;j<=M;j++)
up+=(fac(M)/fac(M-j))/fac(j) * pow(L1,j) * pow(L2-L1,M-j);
low=pow(L2,M);
cout<<up/gcd(up,low)<<"/"<<low/gcd(up,low)<<endl;
//cout<<up<<" "<<low<<" "<<gcd(up,low);
return 0;
}
int main()
{
dp[1]=dp[0]=1;
int A,H,L1,L2,M,C;
int n;
cin>>n;
while(n--)
{cin>>A>>H>>L1>>L2>>M>>C;
fu(A,H,L1,L2,M,C);
}
}

/*Death Battle
Problem Description
In a crossover fantasy universe, Houin Kyoma is up in a battle against a powerful monster Nomu that can kill him in a single blow. However being a brilliant scientist Kyoma found a way to pause time for exactly M seconds. Each second, Kyoma attacks Nomu with certain power, which will reduce his health points by that exact power. Initially Nomu has H Health Points. Nomu dies when his Health Points reach 0. Normally Kyoma performs Normal Attack with power A. Besides from Kyoma’s brilliance, luck plays a major role in events of this universe. Kyoma’s Luck L is defined as probability of performing a super attack. A super attack increases power of Normal Attack by C. Given this information calculate and print the probability that Kyoma kills Nomu and survives. If Kyoma dies print “RIP”.
Constraints
0 < T <= 50
1 <= A, H, C, L1, L2 <= 1000
1 <= M <= 20.
L1<=L2
Input Format
First line is integer T denoting number of test cases.
Each test case consist of single line with space separated numbers A H L1 L2 M C. Where luck L is defined as L1/L2. Other numbers are, as described above.
Output
Print probability that Kyoma kills Nomu in form P1/P2 where P1<=P2 and gcd(P1,P2)=1. If impossible, print “RIP” without quotes.
Timeout
1
Explanation
Example 1
Input
2
10 33 7 10 3 2
10 999 7 10 3 2
Output
98/125
RIP*/
