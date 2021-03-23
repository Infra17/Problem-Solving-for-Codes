#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y,k,m,ans=0;
    string s;
    cin>>y>>k>>s;
    sort(s.begin(),s.end());
    m=stoull(s,0,y);
    if(m%k==0) ans++;
    while(next_permutation(s.begin(),s.end()))
    {cout<<s<<endl;
        m=stoull(s,0,y);
        if(m%k==0) ans++;
    }
    cout<<ans;
}

/*
#Python Code:
from itertools import permutations 
y=int(input())
k=int(input())
s=input()
ans=0

p=permutations(s)
L=set(p)
pp=list(L)
for i in list(pp):
    a=''.join(i)
    aa=int(a,y)
    if aa%k==0:
        ans+=1
        
print(ans)
*/


/*
Divisible by K

Alice has a non-negative integer x written in the base y (a numeral system where 2 <= y <= 16). The number x has distinct digits. Bob has a number k written in the decimal numeral system. Alice wanted to check if the number x is divisible by the number k. However, Bob thinks it's a very easy task. That's why he proposed another problem: count the number of permutations of x which result in a number divisible by k.

Alice is confused and doesn't know how to solve Bob's problem, can you help her?

Notes:
y is given in decimal.
The possible digits for x start with the usual digits (0-9), and then with the letters (A - F), depending on the value of y. For example, if y = 12 then the digits are [0,1,... 9, A, B]. Also when y = 3, the possible digits are [0,1,2].
 Since x may contain letters, it's inputted as a string.
 It's guaranteed that the number x is a valid number in the base y, and that it doesn't contain leading zeroes.
Since the final answer can be very large, output it modulo 1000000007 (10^9+7).

Function Description:
Complete the divisible_k function in the editor below. It has the following parameter(s):
Parameters:

Name       Type  	  Description 
 y              INTEGER 	  The base which x is written in.
 k 	     INTEGER 	  The number which Bob has.
 x  	     STRING 	  Alice’s number written in the base y.

Return: 	
The function must return an INTEGER denoting the number of permutations of x which result in a number divisible by k.

Constraints:
1 <= y <= 16
1 <= k <= 20
1 <= len(x) <= y

Input Format for custom testing:
The first line contains an integer, y, denoting the base which x is written in.
The next line contains an integer, k, denoting the number which Bob has.
The next line contains a string, x, denoting Alice’s number written in the base y.

Sample Cases:

INPUT 	OUTPUT	OUTPUT DESCRIPTION
---------		------------	----------------------------------
5		0		24 in base 5, is 14 in decimal. 42 in base 5, is 22 in decimal. For
4				both cases the number is not divisible by 4. So the answer is 0.
24

Sample Input 1 			Sample Output 1
5					0
4
24

*/
