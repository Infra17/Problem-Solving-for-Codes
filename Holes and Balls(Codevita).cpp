//Problem statement given below
//Author :Infra
//Status : Right Answer

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int ,int> capa_h,r_h,pos_b;
    int N,R;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        cin>>r_h[i];
        capa_h[i]=i;
    }
    int M;
    cin>>M;
    for(int j=1;j<=M;j++)
    {
        cin>>R;
    for(int i=N;i>=1;i--)
       {if(r_h[i]>=R && capa_h[i]!=0)
        {
            pos_b[j]=i;capa_h[i]--;break;
        }
        else pos_b[j];
       }

    }
    for(int i=1;i<=M;i++)
    {
        cout<<pos_b[i]<<" ";

    }
    cout<<"\b";

}

/*
A man is doing an experiment with the device that he built newly. The structure of the device is as below diagram.


B to E is a sloping surface with n holes, labelled H1, H2, … Hn, on it. Holes are of different diameters and depths. The man is releasing m number of balls of different diameters from the point B one after the other. He needs to find the positions of each ball after the experiment.


B 
|  Hm
|  | ...
|  |  | H2
|  |  |  | H1
|..|..|..|.|...E
 

The specialities of the device are :

A ball will fall into the hole, if its diameter is less than or equal to the diameter of the hole.
A hole Hi will become full, if i numbers of balls fall into it. For example hole labelled H3 will become full if 3 balls fall into it.
If a hole is full, then no more balls fall into it.
A ball will reach the bottom point E from B, if and only if it is not falling into any of the holes.
Please help him in finding the eventual position of the balls. If a ball is in hole Pi, then take its position as i. If a ball reached the bottom point E, then take its position as 0.

Contraints

0 <= N <= 50

0 < Diameter of holes <= 10^9

0 < m <= 1000

0 < Diameter of balls <= 10^9

Input

Line 1 : total number of holes, N

Line 2 : N space seperated integers denoting the diameters of N holes, from bottom to top.

Line 3 : total number of balls, M.

Line 4 : M space seperated integers denoting diameters of balls in the order of release.

Output

Line 1 : Positions of each ball in the order of ball release seperated by space.

Testcase

Input

3

21 3 6

11

20 15 5 7 10 4 2 1 3 6 8

Output

1 0 3 0 0 3 3 2 2 0 0

*/
