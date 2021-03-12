//Hard - Recursion
#include <bits/stdc++.h>
using namespace std;
int b;

int answer(string a,int i,int ts,int fs,int count)
{
    if(i<0)
    return INT_MAX;
    if(i==0)
      if(ts==b) {return count;}
       else return INT_MAX;

    if(ts<b) return INT_MAX;

    string s1=a.substr(0,i),s2=a.substr(i,a.length()-i);
    int x=stoi(s1)+stoi(s2)+fs;
    int y=fs+stoi(s2);
    return min(answer(s1,i-1,x,y,count+1),answer(a,i-1,ts,fs,count));

}

int main()
{
    string s;
    cin>>s;
    int i;
    for(i=0;i<s.length();i++)
    if(s[i]=='=') break;

    string A=s.substr(0,i);
    string B=s.substr(i+1,s.length()-i-1);
    int a=stoi(A);
    b=stoi(B);
    int ans=answer(A,A.length()-1,a,0,0);
    if(ans==INT_MAX) cout<<-1;
    else cout<<ans;
}

/*
Minimum Pluses

Given an equation “x=y”, for example, “111=12”, you need to add pluses inside x to make the equation correct. In our example “111=12”, we can add one plus “11+1=12” and the equation becomes correct. You need to find the minimum number of pluses to add to x to make the equation correct. If there is no answer print -1.

Note that the value of y won’t exceed 50000. The number in the corrected equation may contain arbitrary amounts of leading zeroes.

Function Description:
Complete the minimum_pluses function in the editor below. It has the following parameter(s):

Parameters:
NAME		TYPE		DESCRIPTION
---------		--------		--------------------
A 		STRING	String A as described in the problem statement.

Return:
The function must return an INTEGER denoting the minimum number of pluses to make the equation right, or -1 otherwise.

 Constraints:
	1 <= len(A) <= 10^3

Input Format:
The first line contains a string, A as described in the problem statement

Sample Cases:
INPUT		        OUTPUT	       	OUTPUT DESCRIPTION
--------		------------		----------------------------------
23=5               1			It can be accomplished with only one “+” by doing “2+3=5”.

Sample Input 1		Sample Output 1
23=5			              	1


*/
