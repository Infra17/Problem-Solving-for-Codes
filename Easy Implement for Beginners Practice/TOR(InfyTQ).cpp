#include <bits/stdc++.h>
using namespace std;
string s;
int n;
int fun(int i,int sum1,int sum2)
{
    if(i==s.length()) return max(sum1,sum2);
    if(s[i]=='0') return fun(i+1,sum1*10,sum2*10);
    if(s[i]=='2') return fun(i+1,sum1*10 + 1,sum2*10+1);
    
    if(i==0) return fun(i+1,sum1*10+2,sum2*10+2);
    return min(fun(i+1,sum1*10,sum2*10+1),fun(i+1,sum1*10+1,sum2*10));

}

int main()
{
    cin>>n;
    cin>>s;
    cout<<fun(0,0,0);
}

/*
TOR
Lets define Trenary numbers to be the positive integer numbers that consist of digits 0,1,2 only. Let’s also define the operation TOR(x,y) to be the following operation on two Trenary numbers x and y (its output is z = TOR(x,y)).
Go through the digits one by one .
For each digit i, the digit i in the output will be z[i] = (x[i] + y[i]) % 3

You are given a positive integer n, and a long positive integer c, your job is to find two Trenary   numbers a,b (of length n) where c = TOR(a,b) and max(a,b) is as minimum as possible. After finding that pair output max(a,b). If there’s no such pair, output -1.

Note 1: the given numbers won’t have any leading zeros.
Note 2: a,b should be of length n without leading zeros.
Note 3: since the answer can be very large, output it modulo 1000000007 (10^9 +7).

Function Description:
Complete the TOR function in the editor below. It has the following parameters(s):
Parameters:
NAME		TYPE		DESCRIPTION
---------		--------		--------------------- 
n           	INTEGER  	The length of a and b.
c            	STRING       	The number which should satisfy the equation c=TOR(a,b).

Return:
The function must return an INTEGER denoting the max(a,b) when it's minimized.

Constraints: 
•	1 <= n <=  10^5
•	1 <=  len(c) <= 2*n

Input Format
The first line contains an integer, n, denoting the length of a and b .
The next line contains a string, c, denoting the number which should satisfy the equation c=TOR(a,b).

Sample Cases:
INPUT		OUTPUT	OUTPUT DESCRIPTION
---------		------------	---------------------------------- 
2                	11              	The pair is the following: a=11,b=11. There are other pairs that
22				satisfy the equation such as a=12,b=10, but the value of
				max(a,b) is not minimized then.
                               
Sample input 1                                                               Sample output
2                                                                                       11
22
*/
