// NOT DFS,BFS, DP
// Mathametical Question
#include <bits/stdc++.h>
using namespace std;
unordered_map<int,long long int> f;

long long int Fact(int n)
{
  if(f[n]) return f[n];
  return f[n]=n*Fact(n-1);
}


int main()
{
  int n,m,x,y;
  cin>>n>>m>>x>>y;
  n-=1;m-=1;x-=1;y-=1;
  f[0]=f[1]=1;
  int p=(Fact(m+n)/(Fact(m)*Fact(n)));
  int imp=((Fact(x+y)/(Fact(x)*Fact(y)))*(Fact(m-x+n-y)/(Fact(m-x)*Fact(n-y))));
  cout<<p-imp;
}

/*
#Python Code:
import math

n=int(input())-1
m=int(input())-1
x=int(input())-1
y=int(input())-1

ans=math.factorial(n+m)
ans=ans//(math.factorial(n))
ans=ans//(math.factorial(m))

ans1=math.factorial(x+y)
ans1=ans1//(math.factorial(x))
ans1=ans1//(math.factorial(y))

x1=n-x
y1=m-y

ans2=math.factorial(x1+y1)
ans2=ans2//(math.factorial(x1))
ans2=ans2//(math.factorial(y1))

print(ans-(ans1*ans2))
*/


/*
Mark is playing a game on a 2D map. The 2D map is a rectangle of size n*m, where n is the number of rows, and m is the number of columns. The cell (1,1) is located at the top left corner of the map, and the cell (n,m) is located at the bottom right corner.

In one step, Mark can move from any cell to any of the adjacent cells (UP, DOWN, RIGHT, or LEFT). There’s also a blocked cell (x,y) which Mark can’t pass on. Mark can’t go off the map.

The goal of the game is to reach the cell (n,m). Mark is initially at cell (1,1) and he wants to achieve the goal of the game in the minimum number of steps. Now he’s wondering how many paths he can take such that the number of steps is minimized and he gets to cell (n,m). Can you help him find this number?
It is guaranteed that both cells (1,1) and (n,m) are NOT blocked.

Function Description:
Complete the markgame function in the editor below. It has the following parameter(s):

Parameters:
NAME		TYPE		DESCRIPTION
---------		--------		----------------------
n		INTEGER	The number of brown in the map.
m 		INTEGER	The number of columns in the map.
x 		INTEGER	The blocked cell’s row.
y 		INTEGER	The blocked cell’s column.

Constraints:
	1 <= n <= 10^2
	1 <= m <= 10^2
	1 <= x <= n
	1 <= y <= m

Input Format:
The first line contains an integer, n, denoting the number of rows in the map.
The next line contains an integer m, denoting the number of columns in the map.
The next line contains an integer, x, denoting the blocked cell’s row.
The next line contains an integer, y, denoting the blocked cell’s column.

Sample Cases:
INPUT          OUTPUT		         OUTPUT DESCRIPTION
---------		------------		----------------------------------
2
2		           1
2					                      The only way possible is (1,1) ->(2,1) -> (2,2), so 
1				                       	the answer is 1. 

Sample Input 1			Sample Output 1
2		           			1
2
2
1

*/
