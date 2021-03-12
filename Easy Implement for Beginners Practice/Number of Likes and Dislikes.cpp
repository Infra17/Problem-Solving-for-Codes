#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int l=a.length();
    int aa = stoull(a, 0, 2),bb=stoull(b, 0, 2);
    int x=(aa^bb);
    int ans=0;
    while(x)
    {
        x&=(x-1);
        ans++;
    }
    cout<<l-ans;
    return 0;
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
