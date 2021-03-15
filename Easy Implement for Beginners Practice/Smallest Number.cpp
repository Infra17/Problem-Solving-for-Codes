#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int smallestNumber (string num, int k)
{
    if(num.length()<=k)
        return 0;
    unordered_map<char,int> pos;
    for(int i=0;i<num.length();i++)
   { pos[num[i]]=i;}

    string temp=num;
    sort(num.begin(),num.end());
    string ans=num.substr(0,num.length()-k);
    vector<int> v;
    for(int i=0;i<ans.length();i++)
    v.push_back(pos[ans[i]]);

    sort(v.begin(),v.end());
    string ret;
    for(int i=0;i<v.size();i++)
    {ret+=temp[v[i]];}
    int final=stoi(ret);

    return final;
}
int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    int ans;
    cout<<smallestNumber(s,k)%(int)(pow(10,9)+7);
    return 0;
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
