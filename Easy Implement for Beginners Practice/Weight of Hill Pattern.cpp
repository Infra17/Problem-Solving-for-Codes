#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    cout<<(x*n*n)+((y)*n*(n-1)*(2*n-1))/3;//Developed the equation
}

/*
Solution in Python:
#Rahit : easy, mathematical, ap series
n=int(input())
x=int(input())
y=int(input())
print((x* (n ** 2))+((y * n * (n-1) * (2 * n-1))//3))

*/

/*
 Weight of a hill pattern

Given,
The total levels (rows) in a hill pattern as input 1.

The weight of the head level (first row) as input2. and

the weight increments of each subsequent row as input 3.

You are expected to find the TOTAL weight of the hill pattern.

"Total levels" represents the number of rows in the pattern.

"Head level" represents the First row.

Weight of a level represents the value of each star (asterisk) in that row. 

Note that the First row will have the weight of the head level, and the weight of each subsequent row will keep increasing by the specific "weight increment".

the hil patterns will always be of the below format, starting with 1 star * at the head level and increasing 1 star at each level till level N. From second level (second row) a hash # also gets added to the pattern.

*
* # *
* # * # *
* # * # * # *
* # * # * # * # *
* # * # * # * # * # *
.... and so on till level N.

While the weight of a star * is equal to the weight of the current level (current row), the weight of the hash # is equal to the weight of the previous level (previous row).

Let us see a couple of examples.

Example 1-

Given,

The total levels (total rows) in the hill pattern = 5 (input 1)

The weight of the head level (first row)=10 (input 2)

The weight increments of each subsequent level= 2 (input 3)

Then, the total weight of the hill pattern will be calculated as = 10+ (12+10+12) + (14+12+14+12+14) + (16+14+16+14+16+14+16) + (18+16+18+16+18+16+18+16+ 18) = 10+34+66+106+154 = 370

Example 2 -

Given,

The total levels (total rows) in the hill pattern = 4 (input 1)

The weight of the head level =1 (input 2)

The weight increments of each subsequent level= 5 (input 3)

Then, the total weight of the hill pattern will be = 1+ (6+1+6) +(11+6+11+6+11) + (16+11+16+11+16+11+16) = 1+ 13 + 45 + 97 = 156

Observe the weight of star * : please observe that the weight of star * in the First row is 10, in the second row it increases by 2 to and becomes 12, in the third row it increases by 2 and becomes 14 , in 4th row it increases by 2 and becomes 16 and so on...

Observe the weight of hash # : please observe that the weight of hash # in each row is equal to the weight of star * in the previous row.


*/
