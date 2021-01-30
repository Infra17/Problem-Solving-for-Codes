#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,Max=0;
    cin>>n;vector<int> v(n);vector<string> arr;
    for(int i=0;i<n;i++)
    {cin>>v[i];Max=max(Max,v[i]);}
    queue<string> q;q.push("1");
    int i=1;arr.push_back("1");
        while(!q.empty())
        {//cout<<"TEST"<<endl;
            string a=q.front();q.pop();
            q.push(a+"0");arr.push_back(a+"0");i++;
            if(a[a.length()-1]=='0') {q.push(a+"1");arr.push_back(a+"1");i++;}
            if(i>Max) break;
        }
    for(int i=0;i<n;i++)
    {cout<<arr[v[i]-1]<<endl;}

}

/*
Question : Binary number


You are given a set of binary elements. You have to eliminate the binary numbers that contain 11 as a substring.
The resultant sequence will be 1, 10, 100, 101, 1000, and so on.

You are required to generate the code to determine the kth value of the new sequence.

Input format
First line: T denoting the number of test cases
 Next T lines: A single integer K

Output format
Print T lines representing the code to display the Kth value .

Constraints 
1<_T<_10^5
1<_K<_10^8

Sample Input 1
2
3
9

Sample Output 1
100
10001

Explanation

Test case 1: The sequence is 1,10,100 and so on . So the 3rd element of sequence is 100

*/
