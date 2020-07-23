//Problem statement given below
//Author :Infra
//Status : Right Answer
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 double x=0,p,m,r,R;

 float m1,p1,r1;
 double x1,b1;

//cin>>p>>m>>R;
p=p1=500;m=m1=25;R=r1=12.9898987987;
 r=(R/12 +100)/100 ;
 for(int i=1;i<=m;i++)
 x+=p/pow(r,i);
 cout<<llround(x)<<endl;

}
/*
Problem : Saving for a rainy day
By nature, an average Indian believes in saving money. Some reports suggest that an average Indian manages to save approximately 30+% of his salary. Dhaniram is one such hard working fellow. 
With a view of future expenses, Dhaniram resolves to save a certain amount in order to meet his cash flow demands in the future. Consider the following example.
Dhaniram wants to buy a TV. He needs to pay Rs 2000/- per month for 12 installments to own the TV. 
If let's say he gets 4% interest per annum on his savings bank account, then Dhaniram will need to deposit a certain amount in the bank today,
such that he is able to withdraw Rs 2000/- per month for the next 12 months without requiring any additional deposits throughout
Your task is to find out how much Dhaniram should deposit today so that he gets assured cash flows for a fixed period in the future, given the rate of interest at which his money will grow during this period.
Input Format: 
First line contains desired cash flow M 
Second line contains period in months denoted by T 
Third line contains rate per annum R expressed in percentage at which deposited amount will grow
Output Format:
Print total amount of money to be deposited now rounded off to the nearest integerConstraints: M > 0 T > 0 R >= 0 Calculation should be done upto 11-digit precision   
Sample Input and Output
SNo.
Input
Output
1>
500 3 12
1470
2>
6000 3 5.9
17824
3>
500 2 0
1000
*/
