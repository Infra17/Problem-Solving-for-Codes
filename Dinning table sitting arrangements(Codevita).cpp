//Problem statement given below
//Author :Infra
//Status : Right Answer 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map <ll,ll> dp;
int fac(int n)
{
if(dp[n])
return dp[n];
dp[n]=n*fac(n-1);
return dp[n];
}

int func(int n)
{
    if(n<=3)
        return 1;

    return fac(n-1);
}

int main()
{
    dp[0]=dp[1]=1;
    int R,N,c=1;
    cin>>R>>N;
    if(N<=R)
    {
        cout<<1;
        return 0;
    }
    int a=N/R,n=N%R;
     ll ans=fac(N)/(pow(fac(a),R-n) * pow(fac(a+1),n) )/fac(n)/fac(R-n);
    for(int i=1;i<=n;i++)
        c*=func(a);
    for(int i=n+1;i<=R;i++)
    c*=func(a-1);

cout<<c*ans;
}
/*
Dinning table sitting arrangements
Problem Description
In a conference, attendees are invited for a dinner after the conference.
The Coordinator, Sagar arranged round tables for dinner and want to have
an impactful seating experience for the attendees. Before finalizing the
seating arrangement, he want to analyze all possible arrangements. There
are R round tables and N attendees. In case where N is an exact multiple
of R, the number of attendees must be exactly N/R. If N is not an exact
multiple of R, then the distribution of attendees must be as equal as
possible. Please refer Example section for better understanding.
For example, R =2 and N=3
All possible seating arrangements are
(1,2) & (3)
(1,3) & (2)
(2,3) & (1)
Attendees are numbered from 1 to N.
Constraints
0 < R <= 10 (Integer)
0 < N <= 20 (Integer)
Input Format
One line containing two space delimited integers R and N, where R
denotes the number of round tables and N denotes the number of
attendees
Output
Single integer S denoting number of possible unique arrangements

Test case:
Input
2 5
Output
10
Explanation
R=2, N=5

1. (1,2,3) & (4,5)
2. (1,2,4) & (3,5)
3. (1,2,5) & (3,4)
4. (1,3,4) & (2,5)
5. (1,3,5) & (2,4)
6. (1,4,5) & (2,3)
7. (2,3,4) & (1,5)
8. (2,3,5) & (1,4)
9. (2,4,5) & (1,3)
10. (3,4,5) & (1,2)
Arrangements like
(1,2,3) & (4,5)
(2,1,3) & (4,5)
(2,3,1) & (4,5), etc.
But, as it is a round table, all the above arrangements are same

*/
