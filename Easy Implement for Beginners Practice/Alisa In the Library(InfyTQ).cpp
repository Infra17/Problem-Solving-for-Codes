#include <bits/stdc++.h>
using namespace std;

int comb(int c,int d,int cc,int dd)
{
    if(d==1) return cc*c/dd;
    return comb(c-1,d-1,cc*c,dd*d);
}

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<1||b<2||c<d) {cout<<0;return 0;}
    int ans=1;
    ans*=a;
    ans=ans*b*(b-1)/2;
    ans*=comb(c,d,1,1);
    cout<<ans;
}

/*
#Python Code:
def comb(c,d,cc,dd):
    if d==1:
        return cc*c//dd 
    return comb(c-1,d-1,cc*c,dd*d)
    
a=int(input())
b=int(input())
c=int(input())
d=int(input())
if a<1 or b<2 or c<d:
    print(0)
else:
    ans=1 
    ans*=a
    ans=ans*b*(b-1) // 2
    ans*=comb(c,d,1,1)
    print(ans)

/*
Alisa In the Library


Alisa is in the library, she wants to buy some different books, there are “nm” different chemistry books and k different science books. In how many different ways can Alisa select a book of mathematics, two books of chemistry, and some books of science?

Function Description:
Complete the books function in the editor below. It has the following parameter(s):
Parameters:
NAME		TYPE		DESCRIPTION
---------		--------		---------------------
n 		INTEGER	The number of mathematics books.
m 		INTEGER	The number of chemistry books.
k 		INTEGER	The number of science books.
x 		INTEGER	The number of books of science Alisa needs.

Return:
The function must return an INTEGER denoting the number of ways Alisa can buy the books she needs.

Constraints:
	1 <= n <= 10^6
	1 <= m <= 10^6
	1 <= k <= 10^6
	1 <= x <= 10^6

Input Format:
The first line contains an integer, n, denoting the number of mathematics books.
The next line contains an integer, m, denoting the number of chemistry books.
The next line contains an integer, k, denoting the number of science books.
The next line contains an integer, x, denoting the number of books of science Alisa needs.

Sample Cases:
INPUT		    OUTPUT
---------		------------
5	           	30
4
2
2

OUTPUT DESCRIPTION
----------------------------------
We have 5 different mathematics books, four different chemistry books, and two different science books which we have to choose all of them (d=2) so, we can choose 1 book out of five mathematics books in 5 ways, 2 out of 4 chemistry books in 6 ways, and we have only one way to choose 2 out of 2 science books, total: 5*6*1 = 30 ways. 
Sample Input 1			Sample Output 1
5					30
4
2
2

*/
