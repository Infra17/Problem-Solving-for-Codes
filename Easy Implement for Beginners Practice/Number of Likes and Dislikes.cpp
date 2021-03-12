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
Number of Likes and Dislikes

Your friend and you made a list of topics and both of them voted if they like or dislike the topic. They wrote 0 for dislike and 1 for likes.
They asked you to count the number of topics that both like or both dislike.

Input Format
The first line contains a string, A, Denoting Bob's likes and Dislikes.
The second line contains a string, P, Denoting Alice's Likes and Dislikes.


Output Format
Print the number of topics both Bob and Alice like or dislike.

Constraints

1<=|A|,|P| <10^5

|A|=|P|
Both A and P contain 0 and 1, 0 denotes dislike and 1 denotes like.

Sample input
010101
101101

Sample Output
3

*/
