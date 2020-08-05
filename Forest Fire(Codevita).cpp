//Problem Statement given below
//Author : Infra
//Status : Right Answer
#include <bits/stdc++.h>
using namespace std;

char f[21][21];
int n,m;
struct node{int a,b;};
bool valid(int x,int y) {return (x>=0&&y>=0&&x<n&&y<m);}
bool step(node temp){return (temp.a==-1&&temp.b==-1);}
int main()
{
    cin>>n>>m;
    int x,y,i,j,count=0;int ans=1;
    cin>>x>>y;x--;y--;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin>>f[i][j];
    f[x][y]='X';

   queue<node>q;
   node temp;
   temp.a=x;temp.b=y;
   q.push(temp);
   temp.a=-1;temp.b=-1;
   q.push(temp);

  while(!q.empty())
  {
      bool flag=false;
      while(!step(q.front()))
      {
        node count=q.front();
        if(valid(count.a+1,count.b)&&f[count.a+1][count.b]=='T')//a+1,b
        {
            if(flag==false){flag=true;ans++;}
            f[count.a+1][count.b]='X';
            count.a++;
            q.push(count);
            count.a--;
        }
        if(valid(count.a+1,count.b+1)&&f[count.a+1][count.b+1]=='T')//a+1,b+1
        {
           if(flag==false){flag=true;ans++;}
            f[count.a+1][count.b+1]='X';
            count.a++;count.b++;
            q.push(count);
            count.a--;count.b--;
        }
        if(valid(count.a+1,count.b-1)&&f[count.a+1][count.b-1]=='T')//a+1,b-1
        {
            if(flag==false){flag=true;ans++;}
            f[count.a+1][count.b-1]='X';
            count.a++;count.b--;
            q.push(count);
            count.a--;count.b++;
        }
        if(valid(count.a,count.b+1)&&f[count.a][count.b+1]=='T')//a,b+1
        {
            if(flag==false){flag=true;ans++;}
            f[count.a][count.b+1]='X';
            count.b++;
            q.push(count);
            count.b--;
        }
        if(valid(count.a,count.b-1)&&f[count.a][count.b-1]=='T')//a,b-1
        {
            if(flag==false){flag=true;ans++;}
            f[count.a][count.b-1]='X';
            count.b--;
            q.push(count);
            count.b++;
        }
         if(valid(count.a-1,count.b-1)&&f[count.a-1][count.b-1]=='T')//a-1,b-1
        {
            if(flag==false){flag=true;ans++;}
            f[count.a-1][count.b-1]='X';
            count.a--;count.b--;
            q.push(count);
            count.a++;count.b++;
        }
         if(valid(count.a-1,count.b+1)&&f[count.a-1][count.b+1]=='T')//a-1,b+1
        {
            if(flag==false){flag=true;ans++;}
            f[count.a-1][count.b+1]='X';
            count.a--;count.b++;
            q.push(count);
            count.a++;count.b--;
        }
         if(valid(count.a-1,count.b)&&f[count.a-1][count.b]=='T')//a-1,b
        {
            if(flag==false){flag=true;ans++;}
            f[count.a-1][count.b]='X';
            count.a--;
            q.push(count);
            count.a++;
        }
        q.pop();
      }
      q.pop();
      if(!q.empty())
      {
          temp.a=-1;
          temp.b=-1;
          q.push(temp);
      }

   /*
   cout<<endl;
   for(i=0;i<n;i++)
        {for(j=0;j<m;j++)
            {cout<<f[i][j]<<" ";}cout<<endl;}
            cout<<endl<<endl;

    */
  }
 cout<<ans;
}

/*
Forest Fire
Problem Statement
Roco is an island near Africa which is very prone to forest fire. Forest fire is such that it destroys the complete forest. Not a single tree is left.This island has been cursed by God , and the curse is that whenever a tree catches fire, it passes the fire to all its adjacent tree in all 8 directions,North, South, East, West, North-East, North-West, South-East, and South-West.And it is given that the fire is spreading every minute in the given manner, i.e every tree is passing fire to its adjacent tree.Suppose that the forest layout is as follows where T denotes tree and W denotes water.

Your task is that given the location of the first tree that catches fire, determine how long would it take for the entire forest to be on fire. You may assume that the lay out of the forest is such that the whole forest will catch fire for sure and that there will be at least one tree in the forest

Input Format:

First line contains two integers, M, N, space separated, giving the size of the forest in terms of the number of rows and columns respectively.
The next line contains two integers X,Y, space separated, giving the coordinates of the first tree that catches the fire.
The next M lines, where ith line containing N characters each of which is either T or W, giving the position of the Tree and Water in the  ith row of the forest.
Output Format:

Single integer indicating the number of minutes taken for the entire forest to catch fire

Constrains:

3 ≤ M ≤ 20
3 ≤ N ≤ 20
 

Sample Input 1:

3 3
W T T
T W W
W T T
Sample Output 1:

5

Explanation:
In the second minute,tree at (1,2) catches fire,in the third minute,the tree at (2,1) catches fire,fourth minute tree at (3,2) catches fire and in the fifth minute the last tree at (3,3) catches fire.
Sample Input 2:
6 6
1 6
W T T T T T
T W W W W W
W T T T T T
W W W W W T
T T T T T T
T W W W W W

Sample Output 2:

16
*/
