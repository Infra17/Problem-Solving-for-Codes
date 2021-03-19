#include <bits/stdc++.h>
using namespace std;

string Add(string s1,string s2)
{
  int i=stoi(s1)+stoi(s2);
  return to_string(i);
}

string rev(string s)
{
   reverse(s.begin(),s.end());
  return s;
}

bool Palindrome(string s1)
{
  return s1==rev(s1);
}

int main()
{
  string s;
  cin>>s;
  while(1)
  {
    string s1=Add(s,rev(s));
    //cout<<s1<<endl;
    if(Palindrome(s1)){cout<<s1;return 0;}
    s=s1;
  }
}

/*
Identify Palindrome 
For a given positive number num, identify the palindrome formed by performing the following operations-
• Add num and its reverse 
• Check whether the sum is palindrome or not. If not, add the sum and its reverse and repeat the process until a palindrome is obtained 
For example: 
If original integer is 195, we get 9,339 as the resulting palindrome after the fourth addition: 
195
591
------
786
687
------
1473
3741
------
5214
4125
------
9339
Input format: 
Read num from the standard input stream. 
Output format: 
Print the palindrome calculated to the standard output stream. 
Sample Input 
124 
Sample Output 
545  
Explanation 
The sum of 124 and its reverse 421 is 545 which is a palindrome. 
Sample input 1
4
Sample output 1
8
Explanation 1
The sum of 4 and its reverse 4 is 8 which is a palindrome. 


*/
