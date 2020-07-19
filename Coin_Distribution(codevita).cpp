/*Problem Statement given down the program*/
//Author : Infra
//Status : Right Answer
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,total,five,two,one;
    cin>>n;
    if(!n)
    {cout<<0<<" "<<0<<" "<<0<<" "<<0;
    }
    int t=n/5;
    int tr=n%5;
    if(tr<4)
    {
        tr+=5;
     t-=1;
    }
    int dp[10][3]={{0,0,0},{1,0,0},{2,0,0},{1,1,0},{2,1,0},{1,2,0},{2,2,0},{1,3,0},{2,3,0},{2,1,1}};
    total=t+ dp[tr][0]+dp[tr][1];
    cout<<total<<" "<<t<<" "<<dp[tr][1]<<" "<<dp[tr][0];
}


/*
Coin Distribution - Codevita
Problem Statement
Find the minimum number of coins required to form any value between 1 to N,both inclusive.Cumulative value of coins should not exceed N. Coin denominations are 1 Rupee, 2 Rupee and 5 Rupee.Let’s Understand the problem using the following example. Consider the value of N is 13, then the minimum number of coins required to formulate any value between 1 and 13, is 6. One 5 Rupee, three 2 Rupee and two 1 Rupee coins are required to realize any value between 1 and 13. Hence this is the answer.However, if one takes two 5 Rupee coins, one 2 rupee coin and two 1 rupee coin, then too all values between 1 and 13 are achieved. But since the cumulative value of all coins equals 14, i.e., exceeds 13, this is not the answer.

Input Format:
A single integer value.
 

Output Format:
Four space separated integer values.
1st – Total number of coins.
2nd – number of 5 Rupee coins.
3rd – number of 2 Rupee coins.
4th – number of 1 Rupee coins.
 

Constraints:
0 < n < 1000
Refer the sample output for formatting

Sample Input

    13

Sample Output

   6 1 3 2

Explanation

The minimum number of coins required is 6 with in it:
minimum number of 5 Rupee coins = 1
minimum number of 2 Rupee coins = 3
minimum number of 1 Rupee coins = 2
Using these coins, we can form any value with in the given value and itself, like below:

Here the given value is 13

For 1 = one 1 Rupee coin
For 2 = one 2 Rupee coin
For 3 = one 1 Rupee coin and one 2 Rupee coins
For 4 = two 2 Rupee coins
For 5 = one 5 Rupee coin
For 6 = one 5 Rupee and one 1 Rupee coins
For 7 = one 5 Rupee and one 2 Rupee coins
For 8 = one 5 Rupee, one 2 Rupee and one 1 Rupee coins
For 9 = one 5 Rupee and two 2 Rupee coins
For 10 = one 5 Rupee, two 2 Rupee and one 1 Rupee coins
For 11 = one 5 Rupee, two 2 Rupee and two 1 Rupee coins
For 12 = one 5 Rupee, three 2 Rupee and one 1 Rupee coins
For 13 = one 5 Rupee, three 2 Rupee and two 1 Rupee coins*/
