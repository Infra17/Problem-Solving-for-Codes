#include<bits/stdc++.h>
using namespace std;

int SumOfSetBitNumbers(int n,int bit)
{
    int l=1<<(n),ans=0;
    for(int i=0;i<l;i++)
        if(__builtin_popcount(i)==bit) ans+=i;

    return ans;

}

int main()
{
    int n,bit;
    cin>>n>>bit;
    cout<<SumOfSetBitNumbers(n,bit);
}

/*
Solution in Python:
#Rahit:
def SumOfSetBitNumbers(n,s):
    l=(1<<n)
    ans=0
    for i in range(l):
        c=0
        a=i
        while a:
            a&=(a-1)
            c+=1
        if c==s:
            ans+=i
    return ans


n=int(input())
s=int(input())
print(SumOfSetBitNumbers(n,s))


*/

/*
Question : Sum Of Set Bit Numbers
Problem statement 
You are given a function ,
Int SumOfSetBitNumbers(int n, int set);
The function accepts two integers ‘n’ and ‘set’ as its argument where ‘n’  is the number of bits and ‘set’ is the number of set bits . Implement the function to find the sum of all numbers possible from ‘n’ bits having the count of ‘set’ bits equal to set.
Note :
n>0
set>=0
Example :
Input:
n=3
set:2
output :
14
Explanation :
All possible 3 bit numbers are 0,1,2,3,4,5,6,7 with binary representation 000,001,010,011,100,101,110,111 . Numbers with 2 bits set are 3,5 and 6 summation of which is equal to 14.
Sample Input
n:4
set:1
sample output
15

*/
