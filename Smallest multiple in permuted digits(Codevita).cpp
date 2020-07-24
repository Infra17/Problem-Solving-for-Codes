//Problem statement given below
//Author :Infra
//Status : Right Answer 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string num;
    cin>>num;
    sort(num.begin(),num.end());
    long long int d,c;
    bool f=false;
    cin>>d;
    c=atoi(num.c_str());
        if(c%d==0)
            {
                cout<<c;return 0;                
            }
    while(next_permutation(num.begin(),num.end()))
    {
       c=atoi(num.c_str());
        if(c%d==0)
            {f=1;break;}
    }
    if(f)
    cout<<c;
    else
        cout<<-1;
        
        return 0;
}
//Smallest multiple in permuted digits
//The first number in input gets permuted and the output is the smallest number possible that is divisible by the second number in input. If no such number exists output -1.
//Input : 1707693158  853684  Output : 513917768
//Input : 210 3 Output: 12
//Input : 531 2 Output : -1
