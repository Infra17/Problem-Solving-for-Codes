//Problem statement given below
//Author :Infra
#include<bits/stdc++.h>
using namespace std;
int R2,R1,N;
int M[]={0,25,16,9,4,1,0,1,4,9,16,25,36};
int D[]={0,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
int MM[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int func(int p)
{int s,sum=0;
	for(int m=1;m<=12;m++)
	for(int d=1;d<=MM[m];d++)
	{s=min(M[m]+D[d],N);

	sum+=min(p,s)*R2 + (s-min(p,s))*R1;
	}
	return sum;
}



int main()
{
	int R,l=0;
	cin>>N>>R1>>R2>>R;
	
	int nn=N;
	while(nn--)
	{
		if(func(nn)>=R)
		{l=nn;break;
		}
	}

	cout<<N-l;

}

/*
Dr. Vishnu is opening a new world class hospital in a small town designed to be the first preference of the patients in the city. Hospital has N rooms of two types – with TV and without TV, with daily rates of R1 and R2 respectively.

However, from his experience Dr. Vishnu knows that the number of patients is not constant throughout the year, instead it follows a pattern. The number of patients on any given day of the year is given by the following formula –

(6-M)^2 + |D-15| ,

where M is the number of month (1 for jan, 2 for feb …12 for dec) and D is the date (1,2…31).

All patients prefer without TV rooms as they are cheaper, but will opt for with TV rooms only if without TV rooms are not available. Hospital has a revenue target for the first year of operation. Given this target and the values of N, R1 and R2 you need to identify the number of TVs the hospital should buy so that it meets the revenue target. Assume the Hospital opens on 1st Jan and year is a non-leap year.



 

Constraints

Hospital opens on 1st Jan in an ordinary year

5 <= Number of rooms <= 100

500 <= Room Rates <= 5000

0 <= Target revenue < 90000000

Input Format

First line provides an integer N that denotes the number of rooms in the hospital

Second line provides two space-delimited integers that denote the rates of rooms with TV (R1) and without TV (R2) respectively

Third line provides the revenue target

Output

Minimum number of TVs the hospital needs to buy to meet its revenue target. If it cannot achieve its target, print the total number of rooms in the hospital.

Test Case

Example-1 :

Input

20

1500 1000

7000000

Output

14


Explanation

Using the formula, number of patients on 1st Jan will be 39, on 2nd Jan will be 38 and so on. Considering there are only twenty rooms and rates of both type of rooms are 1500 and 1000 respectively, we will need 14 TV sets to get revenue of 7119500. With 13 TV sets Total revenue will be less than 7000000

Example-2 :

Input

10

1000 1500

10000000

Output

10

Explanation

In the above example, the target will not be achieved, even by equipping all the rooms with TV. Hence, the answer is 10 i.e. total number of rooms in the hospital.
*/

