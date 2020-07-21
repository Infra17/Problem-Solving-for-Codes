//Problem statement given below
//Author :Infra
//Status : Right Answer (For all testcases XD)
#include<bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL);
#define booster cout.tie(NULL)
using namespace std;
int dp[100][100];
int main()
{
    speed;
    int n,c=1,co,road,ans=1;
    string str="(0,0)\n";
    cin>>n;
    int nn=n*n;

    if(n&1)
    {
        co=-1;
        int i=n/2,j=n/2,i1,j1;
         while(nn)
         {
             if(c&1)
                {j1=j+co;road=abs(co);
             for(j;j!=j1;j+=co/abs(co))
             dp[i][j]=nn--;
             co*=-1;
             }
             else      {i1=i+co;road=abs(co);

             for(i;i!=i1;i+=co/abs(co))
             dp[i][j]=nn--;
             co+=co/abs(co);
             }

             c++;
         }
    }
    else
    {
        co=1;
        int i=n/2,j=n/2 -1,i1,j1;
         while(nn)
         {
             if(c&1)
                {j1=j+co;road=abs(co);
             for(j;j!=j1;j+=co/abs(co))
             dp[i][j]=nn--;
             co*=-1;
             }
             else      {i1=i+co;road=abs(co);

             for(i;i!=i1;i+=co/abs(co))
             dp[i][j]=nn--;
             co+=co/abs(co);
             }

             c++;
         }
    }

    for(int ii=0;ii<n;ii++)
        {for(int jj=0;jj<n;jj++)
    {
        cout<<dp[ii][jj]<<" ";
        if(dp[ii][jj]%11==0)
        {
            ans++;
            str+= "(" + to_string(ii) +","+ to_string(jj)+")\n";
            }
    }
    cout<<endl;
        }
cout<<"Total Power points : "<<ans<<endl<<str;
return 0;
}

/*
Problem: Chakravyuha

During the battle of Mahabharat, when Arjuna was far away in the battlefield, Guru Drona made a Chakravyuha formation of the Kaurava army to capture Yudhisthir Maharaj. Abhimanyu, young son of Arjuna was the only one amongst the remaining Pandava army who knew how to crack the Chakravyuha. He took it upon himself to take the battle to the enemies.
Abhimanyu knew how to get power points when cracking the Chakravyuha. So great was his prowess that rest of the Pandava army could not keep pace with his advances. Worried at the rest of the army falling behind, Yudhisthir Maharaj needs your help to track of Abhimanyu's advances. Write a program that tracks how many power points Abhimanyu has collected and also uncover his trail
A Chakravyuha is a wheel-like formation. Pictorially it is depicted as below
A Chakravyuha has a very well-defined co-ordinate system. Each point on the co-ordinate system is manned by a certain unit of the army. The Commander-In-Chief is always located at the center of the army to better co-ordinate his forces. The only way to crack the Chakravyuha is to defeat the units in sequential order.
A Sequential order of units differs structurally based on the radius of the Chakra. The radius can be thought of as length or breadth of the matrix depicted above. The structure i.e. placement of units in sequential order is as shown below


The entry point of the Chakravyuha is always at the (0,0) co-ordinate of the matrix above. This is where the 1st army unit guards. From (0,0) i.e. 1st unit Abhimanyu has to march towards the center at (2,2) where the 25th i.e. the last of the enemy army unit guards. Remember that he has to proceed by destroying the units in sequential fashion. After destroying the first unit, Abhimanyu gets a power point. Thereafter, he gets one after destroying army units which are multiples of 11. You should also be a in a position to tell Yudhisthir Maharaj the location at which Abhimanyu collected his power points.

Input Format: First line of input will be length as well as breadth of the army units, say N

Output Format:


Print NxN matrix depicting the placement of army units, with unit numbers delimited by (\t) Tab character
Print Total power points collected
Print coordinates of power points collected in sequential fashion (one per line)
Constraints: 0 < N <=100



Sample Input and Output



SNo.	Input	Output
1	2
1 2
4 3
Total Power points : 1
(0,0)
2	5
1 2 3 4 5
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9
Total Power points : 3
(0,0)
(4,2)
(3,2)*/
