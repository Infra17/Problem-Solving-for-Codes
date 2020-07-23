//Problem statement given below
//Author :Infra
//Any number can be represented by the product of prime factors
//A square free number is where each prime number is multiplied once or less
//so if there are n prime numbers as factors
//The number of square free number is
//nC1 + nC2 + nC3 + ....... + nCn
// And that is equal to 2^n - nC0 = 2^n - 1
#include<bits/stdc++.h>
using namespace std;

bool IsPrime(int i) //The function to see if a number is prime or not
{
    if(i%2==0 && i!=2) //If the number is even, not prime
        return false;
    else
    for (int j=3;j<sqrt(i);j+=2)
    {
        if(i%j==0)
            return false;
    }
    return true;
}


int main()
{
	int N,c=0; //N is the given number,c is the counter to count how many prime numbers N is divisible by
	cin>>N; //Taking the input for N
	for(int i=2;i<sqrt(N);i++)
    {
        if(IsPrime(i))
        {
            if(N%i==0)
            {
                c++;
                N=N/i; //Now we can decrease the value of N by the factor of i, it will take less numbers into consideration
            }
        }
    }


	cout<<pow(2,c) - 1;  //2^n - 1
}
/*
Square Free Numbers
In the theory of numbers, square free numbers have a special place.  A square free number is one that is not divisible by a perfect square (other than 1).
Problem Description
In the theory of numbers, square free numbers have a special place.  A square free number is one that is not divisible by a perfect square (other than 1).  Thus 72 is divisible by 36 (a perfect square), and is not a square free number, but 70 has factors 1, 2, 5, 7, 10, 14, 35 and 70.  As none of these are perfect squares (other than 1), 70 is a square free number.
For some algorithms, it is important to find out the square free numbers that divide a number.  Note that 1 is not considered a square free number. 
In this problem, you are asked to write a program to find the number of square free numbers that divide a given number.
Input
The only line of the input is a single integer N which is divisible by no prime number larger than 19
Output
One line containing an integer that gives the number of square free numbers (not including 1)
Constraints
N   < 10^9
Complexity
Simple
Time Limit
1
Examples
Example 1
Input
20
Output
3
Explanation
N=20
If we list the numbers that divide 20, they are
1, 2, 4, 5, 10, 20
1 is not a square free number, 4 is a perfect square, and 20 is divisible by 4, a perfect square.  2 and 5, being prime, are square free, and 10 is divisible by 1,2,5 and 10, none of which are perfect squares.  Hence the square free numbers that divide 20 are 2, 5, 10.  Hence the result is 3.
Example 2
Input
72
Output
3
Explanation
N=72.  The numbers that divide 72 are
1, 2, 3, 4, 6, 8, 9, 12, 18, 24, 36, 72
1 is not considered square free.   4, 9 and 36 are perfect squares, and 8,12,18,24 and 72 are divisible by one of the.  Hence only 2, 3 and 6 are square free.  (It is easily seen that none of them are divisible by a perfect square).  The result is 3

 
Test Cases
20

3


72

3

29729700

63


62290800

31


691891200

63


523908000

31


340540200

63


290990700

255


449141836

31
*/
