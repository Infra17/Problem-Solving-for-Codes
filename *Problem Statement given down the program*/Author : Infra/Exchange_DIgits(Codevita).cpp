 /*Problem Statement given down the program*/
//Author : Infra
//Status : Right Answer

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int b,c;
    cin>>a>>b;
    sort(a.begin(),a.end(),greater<int>());

    c=atoi(a.c_str());

    if(b>c)
    {cout<<-1;
    return 0;}
    while(b<c)
    {
        prev_permutation(a.begin(),a.end());
        c=atoi(a.c_str());
    }
    next_permutation(a.begin(),a.end());
    cout<<a;

}



/*Problem Description
Compute the nearest larger number by interchanging its digits updated.Given 2 numbers a and b find the smallest number greater than b by interchanging the digits of a and if not possible print -1.

Input Format
2 numbers a and b, separated by space.
Output Format
A single number greater than b.
If not possible, print -1

Constraints
1 <= a,b <= 10000000

Example 1:

Sample Input:

    459 500

Sample Output:
    549

Example 2:

Sample Input:

    645757 457765

Sample Output:
    465577*/
