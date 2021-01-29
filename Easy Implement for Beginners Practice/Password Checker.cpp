#include<bits/stdc++.h>
using namespace std;

int CheckPassword(char str[],int n)
{
   if(n<4) return 0;
   if(str[0]-'0'>=0 && str[0]-'0'<=9) return 0;
   int a=0,cap=0,nu=0;
   while(a<n)
   {
       if(str[a]==' ' || str[a]=='/') return 0;
       if(str[a]>=65&&str[a]<=90) {cap++;}
       else if(str[a]-'0'>=0 && str[a]-'0'<=9) nu++;
       a++;
   }
   return cap>0 && nu>0 ;
}

int main()
{
    string s;
    getline(cin,s);
    int len=s.size();
    char *c=&s[0];
    cout<<CheckPassword(c,len);
}

/*
Python Solution
def CheckPassword(s,n):
    if n<4:
        return 0
    if s[0].isdigit():
        return 0
    cap=0
    nu=0
    for i in range(n):
        if s[i]==' ' or s[i]=='/':
            return 0
        if s[i]>='A' and s[i]<='Z':
            cap+=1
        elif s[i].isdigit():
            nu+=1
            
    if cap>0 and nu>0:
        return 1
    else:
        return 0
    

s=input()
a=len(s)
print(CheckPassword(s,a))
*/

/*
Password Checker
Problem Statement:
You are given a function.
int CheckPassword(char str[], int n);

The function accepts string str of size n as argument. Implement the function which returns 1 if given string str is valid password else 0.
str is a valid password if it satisfies below conditions.
- At least 4 characters
- At least one numeric digit
- At Least one Capital Letter
- Must not have space or slash (/)
- Starting character must not be a number

Assumption:
Input String will not be empty.

Example:
Input:
aA1_67
Output:
1

Sample Input:
a987 abC012
Output:
0


*/
