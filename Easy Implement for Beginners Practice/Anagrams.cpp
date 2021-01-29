#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s2,s1;
    cin>>s1>>s2;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    cout<< (s2==s1);

}
/*
Solution in Python:
#Rahit:
s=input()
s1=input()
s=s.lower()
s=sorted(s)
s1=s1.lower()
s1=sorted(s1)
if s1==s:
    print(1)
else:
    print(0)


*/
/*

Question : Anagrams
Write a program that will check if two words are anagrams or not. Two words are anagrams of each other if one word can be formed by rearranging the letters of another the letters of another word. The program will take two words as input strings (one input per line). THe program will print 1 if the words are anagrams otherwise the program will print 0.
Example:

Input
Creative
Reactive
Output:
1


Input:
Orchestra
Carthross
Output:
0


*/

