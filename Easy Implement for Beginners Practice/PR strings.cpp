#include<bits/stdc++.h>
using namespace std;

int func(string s,int x,int y)
{
    int n=s.length();
    if(y>x){
        for(int i=0;i<n;i++)
        {
            if(s[i]=='p')s[i]='r';
            else if(s[i]=='r')s[i]='p';
        }
        swap(x,y);
    }
    int ans=0,p=0,r=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='p')
          p++;
        else if(s[i]=='r')
        {
            if(p>0)  {p--;ans+=x;}
            else r++;
        }
        else
        {
            ans+=min(p,r)*y;
            p=0;
            r=0;
        }
    }
    ans+=min(p,r)*y;
    return ans;
}

int main()
{
    int T,x,y;
    string s;
    cin>>T;
    while(T--)
    {
        cin>>s>>x>>y;
        cout<<func(s,x,y)<<endl;
    }

}

/*
#Python Solution
def func(s,x,y):
    n=len(s)
    if y>x:
        for i in range(n):
            if s[i]=='p':
                s[i]='r'
            elif s[i]=='r':
                s[i]='p'
        x,y=y,x
    ans=0
    p=0
    r=0
    for i in range(n):
        if s[i]=='p':
            p+=1
        elif s[i]=='r':
            if p>0:
                p+=1
                ans+=x
            else:
                r+=1
        else:
            ans+=min(p,r)*y
            p=0
            r=0
    ans+=min(p,r)*y
    return ans

t=int(input())
while t:
    t-=1
    s=list(input())
    x,y=map(int,input().split())
    print(func(s,x,y))
*/
/*
PR Strings




You are given a string S (consisting of lowercase English characters).
In one operation, you can remove the substring "pr" from the string S and get the amount X or you can  substring "rp" from the string S and get the amount Y.

Find the maximum amount you can get if you perform zero or more such operations optimally.

Note :
 Substring of a string S is defined as a continuous sequence of characters in S.
 After removal of substring "pr" or "rp" from S, rest of the characters in S remain in the same order.
Input Format:
 First Line contains an integer T denoting no of test cases.
 First Line of each test case contains a String S.
 Second Line of each test case contains two space-separated integers X and Y.

Output Format:

Constraints
1<=T<=10
1<=|S| <= 10^5
1<=X<=100
1<=Y<=100

Sample Input 1
2
abppprrr
5 4
prprprrp
7 10

Sample Output 1
15
37


Explanation
Test case 1:

S = "abppprrr", X = 5, y = 4.

Remove substrings as mentioned:
 Remove "pr", new string S = "abpprr".
 Remove "pr" , new string S = "abpr".
 Remove "pr" , new string S = "ab".
In total we remove "pr" 3 times. Hence answer is 3*X = 15.

Test Case 2:
S = "prprprrp". X = 7. Y = 10.
Remove substrings as mentioned
.
 Remove "rp" new string S = "prprp",
Remove "rp", new string S = "prrp".
 Remove "ro", new string S = "pr"
Remove "pr", new string S = "" (Empty String)
In total we remove "rp" 3 times and "pr" 1 time Hence answer is 3*y + 1*X = 3
*/
