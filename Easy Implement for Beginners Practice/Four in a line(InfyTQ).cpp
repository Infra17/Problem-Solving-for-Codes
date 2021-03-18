#include <bits/stdc++.h>
using namespace std;

int main()
{
  int m,ans=INT_MAX,I=-1,J=-1;
  cin>>m;
  vector<vector<int>> mat(m,vector<int>());
  cin.ignore();
  for(int i=0;i<m;i++)
  {
    string s;
    getline(cin,s);
    istringstream ss(s);
    while(ss)
    {
      string w;
      ss>>w;
      if(w=="") break;
      mat[i].push_back(stoi(w));
    }
  }
  int n=mat[0].size();
  vector<vector<int>> Ans1(m,vector<int>(n,1));
  vector<vector<int>> Ans2(m,vector<int>(n,1));
  vector<vector<int>> Ans3(m,vector<int>(n,1));
  vector<vector<int>> Ans4(m,vector<int>(n,1));

  for(int i=0;i<m-1;i++)
  for(int j=0;j<mat[i].size();j++)
  if(mat[i][j]==mat[i+1][j])
    Ans1[i+1][j]=Ans1[i][j]+1;
  
  for(int i=0;i<m;i++)
  for(int j=0;j<mat[i].size() -1;j++)
  if(mat[i][j]==mat[i][j+1])
    Ans2[i][j+1]=Ans2[i][j]+1;
  
  for(int i=0;i<m-1;i++)
  for(int j=0;j<mat[i].size()-1;j++)
  if(mat[i][j]==mat[i+1][j+1])
    Ans3[i+1][j+1]=Ans3[i][j]+1;

  for(int i=0;i<m-1;i++)
  for(int j=1;j<mat[i].size();j++)
  if(mat[i][j]==mat[i+1][j-1])
    Ans4[i+1][j-1]=Ans4[i][j]+1;
  
  for(int i=0;i<m;i++)
  for(int j=0;j<mat[i].size();j++)
  {
    if(Ans1[i][j]>=4 && ans>mat[i][j])
    {ans=mat[i][j];I=i;J=j;}
    if(Ans2[i][j]>=4 && ans>mat[i][j])
    {ans=mat[i][j];I=i;J=j;}
    if(Ans3[i][j]>=4 && ans>mat[i][j])
    {ans=mat[i][j];I=i;J=j;}
    if(Ans3[i][j]>=4 && ans>mat[i][j])
    {ans=mat[i][j];I=i;J=j;}
  }
  if(I==-1)cout<<-1;
  else cout<<ans<<endl;
  
  /*
  For Debugging technique
  cout<<max<<" "<<ans<<" "<<I<<" "<<J<<endl;

  for(int i=0;i<m;i++)
  {for(int j=0;j<n;j++)
  cout<<Ans1[i][j]<<" "; cout<<"   ";
  for(int j=0;j<n;j++)
  cout<<Ans2[i][j]<<" "; cout<<"   ";
  for(int j=0;j<n;j++)
  cout<<Ans3[i][j]<<" "; cout<<"   ";
  for(int j=0;j<n;j++)
  cout<<Ans4[i][j]<<" ";
  cout<<endl;
  }
  */  
}

/*
Four in a line

Given a m x n matrix inmatrix of positive integers, print an integer outnum based on the below logic: 
• Identify all possible sets in inmatrix that contain at least four consecutive elements of the same value val, either horizontally, vertically, or diagonally 
• If only one set of consecutive elements is identified, store the value val in outnum 
• If more than one set of consecutive elements is identified, find the smallest value and store it in outnum 
• If no set of four consecutive elements of the same value is identified either horizontally, vertically, or diagonally, print -1 
Assumption: 
• m and n will be greater than 3 
Input format: 
First line will contain number of rows m of inmatrix 
The next m lines will contain the elements of inmatrix. Each line will have n elements separated by space. 
Read the input from the standard input stream. 
Output format: 
Print outnum to the standard output stream. 

Sample Input 1
5 
0 1 6 8 8 9 
5 6 1 6 8 9  
6 5 6 1 1 9 
1 6 6 1 1 9 
6 3 3 3 3 9 
Sample Output 1
1 
Explanation 1
Following elements are present consecutively at least four times: Element 3 horizontally in the 5th row. Element 1 diagonally starting from the 2nd column in the first row. Element 6 diagonally starting from the 4th column in the second row. Element 9 vertically in the 6th column. As element 1 is the smallest value of the four identified sets of consecutive values, the output is 1  


Sample input 2

5 
0 1 6 8 6 0 
5 5 2 1 8 2 
6 5 6 1 1 9 
1 5 6 1 4 0 
3 7 3 3 4 0  
Sample Output 2
-1 
Explanation 2
Here there are no sets of four consecutive elements of the same value either horizontally, vertically,or diagonally  hence output is -1

*/

