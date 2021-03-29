#include <bits/stdc++.h>
using namespace std;
string s;
int n;
bool ch;
int fun(int i,int num)
{
    if(i==s.length()) return num;//cout<<num<<endl;
    if(ch)  return fun(i+1,num*10);

    if(s[i]=='0') return fun(i+1,num*10);
    if(s[i]=='2') return fun(i+1,num*10 + 1);
    
    if(i==0) return fun(i+1,2);
    ch=true;
    return fun(i+1,num*10+1);
 
}
 
int main()
{
    cin>>n;
    ch=false;
    cin>>s;
    cout << fun(0,0);
}

/*
Merge Strings
Given a bigger string, a positive integer n and n smaller strings, check if the bigger string can
be formed by concatenation from the n smaller strings, using each string 0 or more times in
any order.
Input format:
1st line contains the bigger string to be checked. The next line contains the number of smaller
strings, n. The next n lines contain the n smaller strings.
Output format:
Output “YES” (without quotes) if the bigger string can be formed from concatenation of 0 or
more occurrences of the following n strings, otherwise print “NO” (without quotes)
E.g:-
● Input: aabaa
2
a
aba
Output: YES
Explanation: “a” followed by “aba” followed by another “a” gives “aabaa”
● Input: abacdab
3
ac
acd
ab
Output: YES
Explanation: “ab” followed by “acd” followed by “ab” gives “abacdab”
● Input: abba
2
a
ba
Output: NO
Explanation: After “a”, the only string starting with “b” is “ba”, hence cannot get
“abba”
*/
