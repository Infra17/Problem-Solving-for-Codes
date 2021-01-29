#include <bits/stdc++.h>
using namespace std;

unordered_map<int,unordered_map<int,int>> m;
int gcd(int b,int s)
{
    if(m[b][s]) return m[b][s];
    if(s==1) return s;
    if(s==0) return b;
    return m[b][s]=gcd(s,b%s);
}

int main()
{
    string st;int n;
    getline(cin,st);
    vector<int> arr;
    istringstream ss(st);
    do {
            string word;
            ss >> word;
            arr.push_back(atoi(word.c_str()));
        } while (ss);
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        if(gcd(arr[i],arr[i+1])==1)
        {cout<<i;return 0;}
    }

}
/*
Solution in Python:
#Rahit :
import math
a=list(map(int,input().split()))
n=int(input())
for i in range(n-1):
    if a[i]>a[i+1]:
        if math.gcd(a[i],a[i+1])==1:
            print(i)
            break

*/

/*
Zombies 
In a country of zombies ,each city has a certain percentage of zombies . Cities  are designated as 0 to n-1.
1.	A city[i] id ‘magical’ if city[i] and city [i+1] have no common divisor other than 1.
2.	A city[i] id ‘good’ if the percentage of zombies in the city[i] is more than the percentage of zombies in city[i+1].
Find a city that is perfect , where perfect means both good and magical .  
If there are more than one perfect cities , output the ,left-most city index . Also , the minimum number of cities in a country is 2 and there will be at least one perfect city .

Input specification :
Input 1: An array representing the percentage of zombies in each city .
Input 2 : Number of cities in the country .

Output specification :
Return the favorable city index ‘I’

Example 1:
Input 1: {1,1,3,6,7,3}
Input 2 : 6

Output : 4

Explanation :
The city at index 4 is a perfect city , as input 1[4] and input1[5] are co-prime . Also, input1[4] has a larger percentage of zombies than its neighboring city input1[5].

Example 2:
Input 1: {4,1,3,2}
Input 2 : 4

Output : 0

Explanation :
The city at index 0 is a perfect city , as input 1[0] and input1[1] are co-prime and  input1[0] has a larger percentage of zombies than its neighboring city input[1].

*/
