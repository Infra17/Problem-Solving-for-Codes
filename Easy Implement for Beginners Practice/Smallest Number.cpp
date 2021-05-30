#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;int k;
    cin>>s>>k;
    string y=s;
    sort(y.begin(),y.end());cout<<y<<endl;
    y=y.substr(y.length()-k,k);cout<<y<<endl;
    map<char,int> m;
    for(auto i:y)
    m[i]++;

    string ans="";
    for(auto i:s)
    if(m[i])
    {m[i]--;}
    else ans+=i;

    cout<<ans;
}

/*
Smallest Number

You are given a number in the form of a string. You have to remove K digits from the number such that the remaining digits form the smallest number. You have to print the smallest number as an integer, since the number can be large, output it modulo 10^9+7.

Function Description:
Complete the smallestNumber function in the editor below. It has the following parameter(s):
Parameters:
NAME		TYPE		DESCRIPTION
---------		--------		---------------------
Num		STRING	The given number
K		INTEGER	The number of digits that is to be removed

Return:
The function must return an INTEGER denoting the smallest number after removing K digits from the given number. Output it modulo 10^9+7.

Constraints:
1 <= len(Num) <= 10^5
1 <= K <= len(Num)

Input Format for Custom Testing:
The first line contains a string, Num, denoting the given number.
The next line contains an integer, K, denoting the number of digits that is to be removed.

Sample Cases:
INPUT		OUTPUT		OUTPUT DESCRIPTION
---------		------------		----------------------------------
101		0			Remove all the 3 digits, to get 0.
3

Sample Input 1			Sample Output 1
101					0
3

*/
