//Problem statement given below
//Author :Infra
//Status : Right Answer
#include<bits/stdc++.h>
typedef long long int lld;
#define mod 1000000007
using namespace std;
int M;
int dp[505][505][300];
int arr[505];
int func(int n,int i,int s)
{

    if(n<=i)
        return 0;
    if(n==i+1)
        return arr[i];
    if(dp[n][i][s])
        return dp[n][i][s];
    int sum=0;
    if(n>i)
   { sum=max(M,arr[i]+func(n,i+2,s));
     if(s>0)
        sum=max(sum,arr[i]+arr[i+1]+func(n,i+2,s-1));

   }
    if(n>i+1)
    {sum=max(sum,arr[i+1]+func(n,i+3,s));
    if(s>0)
        sum=max(sum,arr[i+1]+arr[i+2]+func(n,i+3,s-1));

    }
    sum=max(sum,func(n,i+3,s+1));
    return dp[n][i][s]=sum;
}


int main()
{
    int T,n;
    cin>>T;
   while(T--)
    {
        M=INT_MIN;
        memset(arr,0,sizeof(arr));
        memset(dp,0,sizeof(dp));
        cin>>n;
        for(int i=0;i<n;i++)cin>>arr[i];
        cout<<func(n,0,0)<<endl;
        n=0;
    }
return 0;

}

/*
Gem Collector

Problem Description

Gems Collection is very interesting game. Given N sacks, each filled with random number of Gems, the objective of the game is to collect maximum number of Gems by picking up the sacks, subject to certain rules.

The rules are as follows

1. Start from left-most sack and move towards right. Player needs to decide then and there whether the current sack is to be picked up or not. Player cannot pick up sacks on the left once the player has moved past them.

2. Player cannot pick two consecutive sacks i.e. if the player picks Si then Si+1 can not be picked

3. The player can skip any number of sacks as desired

4. For every three consecutive skips, the player will get one Super Card.

5. The player can use one super card to pick two consecutive sacks one time

Example:

Gems in sacks: 5 8 12 3 6

Possible pickups without using Super Card: (5 and 12 and 6), (5 and 12), (5 and 3), (5 and 6), (8 and 3), (8 and 6), (12 and 6), only 5, only 8, only 12, only 3 and only 6

A Super Card allows the following pickup -

If Player skips sacks worth 5, 8 and 12 gems then player can pick-up consecutive sacks 3 and 6.

Once a super card is used, its power is lost.

Write a program to determine the maximum number of gems that can be collected by the player as the number of gems in all sacks is already known.

Constraints

1 <= T <= 10

1<= N <= 500

1 <= Gems in one sack <= 100

Input Format

The First line contains one integer T denoting the test cases.

For each test case,

the first line contains one integer N denoting number of sacks.

the second line contains N space delimited integers, representing the number of gems in each sack.

Output

Maximum number of gems for each test case T separated by new line.

Explanation

Example 1

Input:

1

3

7 10 1

Output:

10

Explanation

After applying all 5 rules, player can pick up maximum 10 gems.

Example 2

Input:

3

1

98

6

2 2 2 5 6 7

4

7 8 9 10

Output:

98

18

18

Explanation

For test case 1:

After applying all 5 rules, player can pick up maximum 98 gems as there is only one sack.

For test case 2:

Player will skip first three sacks to gain 1 super card and pickup 5 gems sack, then player will use super card to pick up 6 and 7 gems sack.

So, total gems = 5 + 6 + 7 = 18 gems.

For test case 3:

Player will pick 8 and 10 gems.
codevita 2018
*/


