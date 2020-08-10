//Problem statement given below
//Author :Infra
//Status : Right Answer
//#include<iostream>

#include<bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL);
#define booster cout.tie(NULL)
typedef long long int lld;
#define mod 1000000007
using namespace std;
int v[100][100];
int ar[100];
int a,b,f,s;

void print(int ar[],int n)
{
  for(int i=0;i<n;i++)
    cout<<ar[i]<<" ";
}

bool func(int ar[],int n)
{int s=0;ar[n]=ar[0];
    for(int i=0;i<=n;i++)
    {
        if(v[ar[i]][ar[i+1]]==1)s++;
        else if(v[ar[i]][ar[i+1]]==99)return false;
    }
    return (s==a);
}

int main()
{
 speed;

 int n,flag=0;cin>>n;
for(int i=0;i<n;i++)
    ar[i]=i+1;
    cin>>a>>b;
int A=a,B=b;
while(A--)
{
    cin>>f>>s; v[f][s]=v[s][f]=1;

}
while(B--)
{
    cin>>f>>s;
    v[s][f]=v[f][s]=99;
}


 do
 {
     if(func(ar,n))
     {

         flag=1;break;
     }
 }while(next_permutation(ar,ar + n));

 if(flag)
 {
     print(ar,n);
 }
 else
    cout<<-1;

 return 0;
}

/*
All Party Meet Problem Description 
ONLINE EDITOR (E) 
There have been unprecedented natural calamities in several parts of India and the Prime Minister's office has called for an all party meeting to discuss how the Government can handle such calamities with a coordinated effort. It is well known that leaders of different political parties indulge in mud slinging at each other, some times these going beyond the lines of decency, so that the leaders of two such parties would not want to sit next to each other in any meeting. The Prime Minister's Office has a tough time in planning the seating arrangements in the round table. Some one suggested that one can use the IT expertise of TCS to find a feasible solution to the seating arrangement problem. 
The PMO hands over the list of political parties invited to the meeting. To simplify things, let us assume that the parties are numbered 1,2,...N. The PMO also hands over which of the pairs of parties that are friendly, and must be seated next to each other and the parties that are inimical, who must not be seated adjacent to each other. Given this information, find a seating arrangement for the meeting in the circular table. 
As the table is circular, we may assume that position 1 is occupied by party 1. The output is a sequence of N party numbers starting from 1, which meets the criteria. If there are multiple sequences that meet the criteria, the sequence that is the lowest in lexicographic sequence is to be printed. If a possible seating arrangement does not exist, the output must be -1. 
Constraints 
N <= 100 

Input Format First line contains N, the number of political parties The next line contains a pair of space separated integers a b indicating the number of pairs of friendly parties and number of pairs of inimical parties 
Each of the next a lines contains a pair space separated integers u v where party u is friendly with party v 

TCS: CodeVita - Coding Arena Each of the next b lines contains a pair of space separated numbers x y where party x is inimical with party y. 
Output 
If the seating arrangement is possible, the lexicographically smallest sequence of N integers in order of the seating arrangement, starting with 1. These should be space separated 
If not possible, -1 
Test Case 1:input:
7 
3 2
1 5
3 4
1 6
2 3
2 4
output:
1 5 2 7 3 4 6

Test Case 2:input:
5
2 2
5 1
2 4
2 3
4 2
output:
-1

testcase :

*/
