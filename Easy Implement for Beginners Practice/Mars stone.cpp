#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int> ma;
int main()
{
    int m,n,l,w=0,j=0,co=0;
    cin>>m>>n;
    for(int i=0;i<n;i++)
    {cin>>l;
    ma[l]++;}

    vector<int> v;
    for(int i=0;i<m;i++)
    if(ma[i]==0)
    v.push_back(i);

    while(w<m)
    {
        w+=v[co];
        co++;
        if(co==v.size()) break;
    }
    cout<<co-2; //Leaving the 0th element
}
/*
Solution in Python:
#Rahit:
m=int(input())
n=int(input())
n1=set(map(int,input().split()))

a=[]
for i in range(1,m+1):
    if i not in n1:
        a.append(i)
        
count=0

for i in a:
    m-=i
    if m>=0:
        count+=1
    else:
        break
    
print(count)



*/


/*
Mars Stone
Rob has gone to Mars to collect some stones. The bag he is carrying can hold a maximum weight of M. There are M stones weighing from 1 to M in Mars. There are No stones on Mars that are similar to the ones on Earth. Find the number of stones can bring from Mars such that none of them are similar to any stone on earth.

Input Specification:

 input1: M, denoting the size of the bag and the number of different stone weights present on Mars.

input2: N, denoting the number of common stones on Earth and Mars.

Input3: An N element add containing the list of weights of the common stones.

Output Specification:

your function should return the maximum unique stones that can be collected.

Example 1:

   input1: 10
   input2: 3
Input3: {1,3,5}

 Output: 2

Explanation: Rob collect one of the following stone weight sets: {2,4}, {2,6} or {2,8}

Example 2:

   Input1: 14
   Input2: 4
   Input3: {4,6,8,9}

   Output: 4

Explanation: 

 Rob collects one of the following stone weight sets: {1,2,3,7} or {1,2,3,5}.


*/
