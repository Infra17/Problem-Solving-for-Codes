#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> v)
{
    int n = v.size();
    if (n == 0)
        return 0;
    int mx = v[0];
    for (int i = 1; i < n; i++)
        mx = max(mx, v[i]);
    if (mx <= 0)
        return 0;
    int mxSum = 0;
    int cSum = 0;
    for (int i = 0; i < n; i++)
    {
        cSum += v[i];
        if (cSum < 0)
            cSum = 0;
        mxSum = max(mxSum, cSum);
    }
    return mxSum;
}
int main()
{
    int n;
    cin >> n;
    int price[n];
    for (int i = 0; i < n; i++) cin >> price[i];
    vector<int> diff;
    for (int i = n-2; i >=0 ; i--) diff.push_back(price[i+1] - price[i]);
    int ans = solve(diff);
    if(ans<0) cout<<0<<endl;
    else cout<<ans<<endl;
}

/*
#Python Solution:
def func(diff):
    n=len(diff)
    if n==0:
        return 0
    mx=max(diff)
    if mx<=0:
        return 0
    mxS=0
    cS=0
    for i in diff:
        cS+=i
        if cS<=0:
            cS=0
        mxS=max(cS,mxS)
    return mxS



n=int(input())
arr=[]
diff=[]
ans=[0]
for i in range(n):
    arr.append(int(input()))
for i in range(n-1):
    diff.append(arr[i+1]-arr[i])
ans=func(diff)
if ans<0:
    print("0")
else:
    print(ans)

/*
Share Holder
Ratan is a crazy rich person. And he is blessed with luck, so he always made the best profit possible with the shares he bought. That means he bought a share at a low price and sold it at a high price to maximize his profit. Now you are an income tax officer and you need to calculate the profit he made with the given values of stock prices each day. You have to calculate only the maximum profit Ratan earned.
Note that:
Ratan never goes into loss.
Example
Price=[9,8,6] 

The Price always went down, Ratan never bought it.

Input Format:
First line with an integer n, denoting the number days with the value of the stack
Next n days, telling the price of the stock on that very day.

Output Format:
Maximum profit done by Ratan in a single line.

Sample Input for Custom Testing

 STDIN              
-----------       
7
1 
9 
2 
11
1 
9 
2


Sample Output

  10


 Explanation

The maximum profit possible is when Ratan buys it in 1 rupees and sells it in 11.


*/
