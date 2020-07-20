//Problem statement given below
//for  some comparatively bigger values
//Author : Dashy99,infra
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map <ll,ll> m;
/*
Overflow by recursive funcion
ll fac(int n)
{
    if(m[n])
        return m[n];
   return m[n]=n*fac(n-1);

}
*/
int main()
{

    m[0]=1;m[1]=1;
    ll n;
    cin>>n;
   /*
   int c=1;
    for(ll i=0;i<=n;i++)
    {
        sum+=c*fac(n)/fac(i);
        c*=-1;
    }
    cout<<sum%1000000007;
*/

    for(ll i=2;i<=n;i++)
    {
      m[i]=(i-1)*(m[i-1]+m[i-2]); //%1000000007;
    }
    cout<< m[n]%1000000007<<endl;
    //cout<< m[n] <<endl;



}

/*For enhancing the book reading, school distributed story books to students as part of the Children’s day celebrations.
To increase the reading habit, the class teacher decided to exchange the books every weeks so that everyone will have a different book to read. She wants to know how many possible exchanges are possible.
If they have 4 books and students, the possible exchanges are 9. Bi is the book of i-th student and after the exchange he should get a different book, other than Bi.
B1 B2 B3 B4 – first state, before exchange of the books
B2 B1 B4 B3
B2 B3 B4 B1
B2 B4 B1 B3
B3 B1 B4 B2
B3 B4 B1 B2
B3 B4 B2 B1
B4 B1 B2 B3
B4 B3 B1 B2
B4 B3 B2 B1
Find the number of possible exchanges, if the books are exchanged so that every student will receive a different book.
Input format:
Input contains one line with N, indicates the number of books and number of students.
Output format:
Output the answer modulo 1000000007.
Constraints:
1<= N <= 1000000

I/p:- 4
O/p:- 9
*/
