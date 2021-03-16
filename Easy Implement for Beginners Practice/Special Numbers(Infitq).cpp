#include <bits/stdc++.h>
using namespace std;

int func(int s,int p,int n)
{
  if(p==n-1) return 1;
  int ans=0;
  for(int i=s;i<=9;i++)
  ans+=func(i,p+1,n);

  return ans;
}


int main()
{
  int n,a,ans=0;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++) 
  {
    cin>>a;
    for(int i=0;i<=9;i++)
    ans+=func(i,0,a);
  }
  cout<<ans;
}

/*
Special Numbers.cpp
Adam is currently studying a new topic in his math class. It’s about the special numbers, and here a special number is defined as follows: let x be a non-negative integer, if we go through the digits of x from left to right, no digit will be strictly greater than the previous one. In that case, x is a special number. For example 12234, 4999 are special numbers, while 102, 990 are not.

Now Adam is wondering for positive integer m, how many special numbers there are such that consist of m digits. Can you help answer that?

Adam is thinking about n different integers for m, you need to find the answer for each m, and then sum all answers and print the resultant number.

Note: Notice that leading zeroes are required: 0000, 0011, 0025 are all valid four-digit special numbers.

Function Description:
Complete the special_numbers function in the editor below. It has the following parameter(s):
Parameters:
NAME		TYPE			DESCRIPTION
---------		--------			---------------------
n 		INTEGER		The number of numbers m Adam is thinking about.
arr 		INTEGER ARRAY	The numbers m Adam is thinking about.

Return:
The function must return an INTEGER denoting the sum of answers for all values m.

Constraints:
	1 <= n <= 100
	1 <= arr[i] <= 200

Input Format for Custom Testing
The first line contains an integer, n, denoting the number of elements in arr.
Each line i of the n subsequent lines (where 0 <= i <= n) contains an integer describing the i-th element of the array.

Sample Cases:
INPUT		      OUTPUT		OUTPUT DESCRIPTION
---------		------------		----------------------------------
2				             	The answer if m=1 is 10, which is all numbers from 0 to 9.
4		          725			The answer for m=2 is 55.
1					            The answer for m=3 is 220.
					            They all sum up to 285, so the answer is 285. For 4 it is 715
                      So for 4 and for 1 total here is 725.

Sample Input 1			Sample Output 1
2				          	725
4
1


*/
