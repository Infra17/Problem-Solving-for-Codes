#include <bits/stdc++.h>
using namespace std;
int n,ans,tot;

void Show(map<pair<int,int>,bool> m)
{
    cout<<"________________"<<endl;
    for(auto i:m)
    cout<<i.first.first<<" "<<i.first.second<<endl;
    cout<<"________________"<<endl;
}

int Total(vector<vector<int>> v,map<pair<int,int>,bool> m)
{
    int tot2=0;
    for(auto i:m)
    if(v[i.first.first][i.first.second]==1) tot2++;
    return tot2;
}

bool valid(int i,int j,map<pair<int,int>,bool> m)
{
    if(i<n && i>=0 && j>=0 && j<n)
    if(m[{i,j}]==false) return true;
    return false;
}

void DFS(int i,int j,vector<vector<int>> v,map<pair<int,int>,bool> m)
{
    if(valid(i,j,m)==false) return;
    m[{i,j}] = true;
    if(v[i][j]==-1) return;
    if(i==n-1 && j==n-1)
    if(Total(v,m)==tot) {  /*Show(m);*/  ans++;}
    DFS(i+1,j,v,m);DFS(i-1,j,v,m);
    DFS(i,j-1,v,m);DFS(i,j+1,v,m);
}

int main()
{
    cin>>n;ans=0;tot=0;
    vector<vector<int>> v(n,vector<int>(n));
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
   {cin>>v[i][j];if(v[i][j]==1) tot++;}
    map<pair<int,int>,bool> m;
    DFS(0,0,v,m);
    cout<<ans;
}
/*
Grid Path
Given a positive integer n and an nXn square grid, with each cell containing an integer x in
{-1,0,1}, the integer x can be interpreted in the following manner:
-1: Blocked cell
0: May or maynot travel through the cell.
1: Must travel through cell.
Start cell is the top-left cell and end cell is the bottom-right cell. Find the no. of valid paths
from start cell to end cell of square grid, where a valid path must traverse every cell marked 1
exactly once, every cell marked 0 at most once and must not traverse through the cells
marked -1.
Input format:
1st line contains n, the dimension of the grid. The next n lines contain n space separated
integers, where each integer is from -1,0,1.
Output format:
Output a single integer p, the total number of valid paths from start cell to end cell.
E.g:-
● Input: 3
1 0 -1
1 1 -1
0 0 1
Output: 2
Explanation: (0,0)->(1,0)->(1,1)->(2,1)->(2,2) and
(0,0)->(0,1)->(1,1)->(1,0)->(2,0)->(2,1)->(2,2)
Input: 3
1 0 0
1 -1 -1
1 0 1
Output: 1
Explanation: (0,0)->(1,0)->(2,0)->(2,1)->(2,2)
Input: 3
1 1 0
1 -1 -1
0 1 1
Output: 0
Explanation: Once you visit (0,1), there is no way to complete any valid path
*/
