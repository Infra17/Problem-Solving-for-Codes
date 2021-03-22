#include <bits/stdc++.h>
using namespace std;
int l;

int fun(int s,int e,int k,vector<int> a)
{
    if(k==0) return 0;
    if(s>e || k<0) return l;
    return min(1+fun(s+1,e,k-a[s],a),1+fun(s,e-1,k-a[e],a));
}

int main()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    l=pow(10,9);
    int k;cin>>k;
    int kk=fun(0,n-1,k,a);
    if(kk>=l){cout<<-1;}
    else cout<<kk;
}

/*
#Python Code:
n=int(input())
a=[]
for i in range(n):
 a.append(int(input()))

def answer(s,e,k):
 if k==0:
  return 0

 if s>e or k<0:
  return 10**9

 else:
  return min(1+answer(s+1,e,k-a[s]),1+answer(s,e-1,k-a[e]))

k=int(input())
k1=answer(0,n-1,k)
if k1>=(10**9):
 print(-1)

else:
 print(k1)


*/

/*
Minimum Withdrawals 
There is a unique ATM in Wonderland. Imagine this ATM as an array of numbers. You can withdraw cash only from either ends of the array. Sarah wants to withdraw X amount of cash from the ATM. What is the minimum number of withdrawals Sarah would need to accumulate X amount of cash. If it is not possible for Sarah to withdraw X amount, return -1. 
Input Format 
The first line contains an integer, N, denoting the number of elements in ATM. 
Each line i of the N subsequent lines (where 0 <= i < N) contains an integer describing the cash in the ATM. 
The next line contains an integer, X, denoting the total amount to withdraw. 
Constraints 
1 <= N <= 10^5 
1 <= ATM [i] <= 10^5 
1 <= X <= 10^5 
Sample Input 
2 
1 
1 
3 
Sample Output 
-1 
Explanation 
The total amount of cash in the ATM is 2, hence Sarah cannot withdraw an amount of 3.

*/
