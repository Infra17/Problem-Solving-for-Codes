//Problem Statement given below
//Author : Infra
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;cin>>n;
  if(n==1) {cout<<1;return 0;}
  cout<<(1<<(n-1))-2 ;
  return 0;
}

/*
Mountain Peak Sequence

Consider the first three natural numbers 1, 2, 3.
These can be arranged in the following ways: 2, 3, 1 and 1, 3, 2.
In both of these arrangements, the numbers increase to a certain point and then decrease.
A sequence with this property is called a "mountain peak sequence".

Given an integer N, write a program to find the remainder of mountain peak arrangements that can be obtained by rearranging the numbers 1, 2, ...., N.

Input Format:
One line containing the integer N
Output Format:
An integer m, giving the remainder of the number of mountain peak arrangements that could be obtained from 1, 2, ...., N is divide by Mod
Constraints:
Mod = 10^9 + 7
N <= 10^9

Example 1
Input
3
Output
2
Explanation
There are two such arrangements: 1, 3, 2 and 2, 3, 1

Example 2
Input
4
Output
6
Explanation
The six arrangements are (1, 2, 4, 3), (1,3,4,2), (1,4,3,2), (2,3,4,1), (2,4,3,1), (3,4,2,1)
*/
