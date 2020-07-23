//Problem statement given below
//Author :Infra
#include<bits/stdc++.h>
using namespace std;
map<double,int> m;

int main()
{
	int T,x,y,v,s=0;
	cin>>T;int n=1;
	while(n<=T)
	{
		cin>>x>>y>>v;
		m[sqrt( x*x + y*y )/v]++;
	if(	m[sqrt( x*x + y*y )/v]==2)
	{s++;
	}
	else if(m[sqrt( x*x + y*y )/v]>2)
	s+=m[sqrt( x*x + y*y )/v]-1;



		n++;
	}


cout<<s;
}
/*
On a busy road, multiple cars are passing by. A simulation is run to see what happens if brakes fail for all cars on the road. The only way for them to be safe is if they don’t collide and pass by each other. The goal is to identify whether any of the given cars would collide or pass by each other safely around a Roundabout. Think of this as a reference point O ( Origin with coordinates (0,0) ), but instead of going around it, cars pass through it.

Considering that each car is moving in a straight line towards the originwith individual uniform speed. Cars will continue to travel in that same straight line even after crossing origin. Calculate the number of collisions
that will happen in such a scenario.

Note : – Calculate collisions only at origin. Ignore the other collisions. Assume that each car continues on its respective path even after the collision without change of direction or speed for an infinite distance.

Input Format

Output Format
A single integer Q denoting the number of collisions at origin possible for given set of cars.

Constraints
1<=T<=100
1<=N<=5000

Sample Input and Output

Example 1
Input
5
5 12 1
16 63 5
-10 24 2
7 24 2
-24 7 2

Output
4

Explanation
Let the 5 cars be A, B, C, D, and E respectively.
4 Collisions are as follows –
1) A & B.
2) A & C.
3) B & C.
4) D & E.
*/
