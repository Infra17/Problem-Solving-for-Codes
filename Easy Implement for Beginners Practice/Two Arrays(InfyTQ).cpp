#include <bits/stdc++.h>
using namespace std;
int n,x,T,ans;
void fun(int i,int A,int B,int sumA,int sumB,vector<int> a,vector<int> b)
{
    if(i==n) return;
    if(sumA>=x && sumB>=x && (A|B)==T) {ans++;/*cout<<A<<" "<<B<<endl;*/return;}
    fun(i+1,A,B,sumA,sumB,a,b);
    fun(i+1,A|(1<<(i+1)),B,sumA+a[i+1],sumB,a,b);
    fun(i+1,A,B|(1<<(i+1)),sumA,sumB+b[i+1],a,b);
    fun(i+1,(A|(1<<(i+1))),(B|(1<<(i+1))),sumA+a[i+1],sumB+b[i+1],a,b);
}

int main()
{
    cin>>n;ans=0;
    T= (1<<n) -1;
    vector<int> a(n),b(n);
    cin>>x;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    fun(-1,0,0,0,0,a,b);
    cout<<ans;
}

/*
Two Arrays


Two Arrays

Given 2 arrays (A and B) of size N. You are also given a number X. You must select some subset of numbers from array A and some subset of numbers from array B such that the following conditions satisfy:
Size of union of Indices selected in both subset = N. Same index can be selected in both the arrays.
Sum of elements of subset from A must be at least X and the sum of elements from subset B is at least X.
Find the number of different ways to select subsets from A and B.

Function Description:
Complete the solve function in the editor below. It has the following parameter(s):
Parameters:
NAME		TYPE			DESCRIPTION
---------		--------			---------------------
N     		INTEGER        	size of array
X     		INTEGER        	minimum sum required in each subset
A     		INTEGER ARRAY  	array A
B     		INTEGER ARRAY  	array B

The function must return an INTEGER denoting the number of ways.

Return:
Constraints:
1 <= N <= 20
1 <= X <= 10^5
1 <= A[i] <= 10^5
1 <= B[i] <= 10^5

Input Format:
The first line contains an integer, N, denoting the number of elements in A.
The next line contains an integer, X, denoting the required sum of elements.
Each line i of the N subsequent lines (where 0 <= i < N) contains an integer describing Ai.
Each line i of the N subsequent lines (where 0 <= i < N) contains an integer describing Bi.

Sample Cases
INPUT		OUTPUT		OUTPUT DESCRIPTION
2    		3        			Indices which can be selected from A and B.
3
1                   				A = [0,1] B = [0]
2
3                   				A = [0,1] B = [1]
3                   				A = [0,1] B = [0,1]
Sample Input 1			Sample Output 1
2             					3
3
1
2
3
3
*/
