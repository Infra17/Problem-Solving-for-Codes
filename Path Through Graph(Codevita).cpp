//problem : Path Through Graph
//Author : Infra
//Status : Right Answer

#include<bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL);
#define booster cout.tie(NULL)
typedef long long int lld;
#define mod 1000000007
using namespace std;
unordered_map<int,int> maa;

void print(std::vector <int> const &a) {
   std::cout << "The vector elements are : ";

   for(int i=0; i < a.size(); i++)
   std::cout << a.at(i) << ' ';

   cout<<endl;
}


bool prime(int i)
{
    if(maa[i]==2) return false;
    if(maa[i]==1) return true;

    if(i&1==0) {maa[i]=2;return false;}
    for(int j=3;j<=sqrt(i);j+=2)
        if(i%j==0) {maa[i]=2;return false;}

    maa[i]=1;return true;
}

vector<int> fun(int a)
{

    vector<int> arr;
    int i=3;
    arr.push_back(a);
    while(a%2==0)
    {
        a/=2;arr.push_back(a);
        //cout<<a<<endl;
    }
    for(int h=3;h<=sqrt(a);h+=2)
    {
        if(prime(h))
        if(a%h==0)
        {
            a/=h;arr.push_back(a);h-=2;
            //cout<<a<<endl;
        }

    }
    if(a!=1)
    arr.push_back(1);
    return arr;
}

int main()
{
    speed;
    int a,b,ii=0;
    //cin>>a>>b;
    a=32;b= 48;
    vector<int> M = fun(a);

    vector<int> N = fun(b);

    int m=M.size(),n=N.size();int tt=min(m,n);reverse(M.begin(),M.end());reverse(N.begin(),N.end());
   for(ii=0;ii<tt;ii++)
        if(M[ii]!=N[ii])
        break;
        //else{cout<<M[ii]<<endl;}
    //print(M);print(N);


    cout<< m+n-(2*ii);


    return 0;
}

/*
Path Through Graph
Problem Description
You are given two natural numbers. Imagine these natural numbers as nodes on a graph. On this graph, a number is connected to its largest factor other than itself. You have to find the shortest path between them and print the number of edges on that path.
If the two numbers do not have any common factor, then construct a path through 1. For better understanding refer to the examples below:
Example 1: Input numbers: 2 4
The numbers are directly connected as follows on the graph. 2 is the largest factor of 4, other than itself.
We can also see that there is only on edge between them.
4 <--> 2
Hence the number of edges in shortest path is 1.
Output: 1

Example 2: Input numbers: 18 19
The graph for number 18 and 19 will look like this. Here we have 4 edges in the path.
18 <--> 9 <--> 3 <--> 1 <--> 19
Output: 4

Example 3: Input numbers: 9 9
The number of edges in shortest path is zero since the numbers correspond to the same node.
Output: 0
Constraints
0 < M, N <= 10 ^ 9
Input
Single line containing two space separated integers M, N
Output
Number of edges in the shortest path.
Time Limit
1
Examples
Example 1
Input
15689 28
Output
5
Explanation :
The graph for number 15689 and 28 will look like this.
Since we know that largest factor of 15689 other than itself is 541.
Since 541 is a prime number, it’s largest factor other than itself is 1.
For number 28, it’s largest factor other than itself is 14.
Largest factor of 14, other than itself is 7.
Since 7 is a prime number, it’s largest factor other than itself is 1.
So, the graph will look like this:
15689 <--> 541 <--> 1 <--> 7 <--> 14 <--> 28
Since there are 5 edges in this graph, output will be 5.
Example 2
Input
16 4
Output
2
Explanation :
The graph for number 16 and 4 will look like this.
Since we know that largest factor of 16 other than itself is 8.
Largest factor of 8 other than itself is 4. That’s the other input number, so we will stop here.
So, the graph will look like this:
16<-->8<-->4
Since there are 2 edges in this graph, output will be 2.

*/
