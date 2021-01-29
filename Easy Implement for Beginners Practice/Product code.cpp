#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1="";
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        s1+='a'+(s[i]-'0');
    }
    cout<<s1;
}

/*
product code

The cosmetic company "BeautifyMe" wishes to know the alphabetic product code from the
product barcode. The barcode of the product is a numeric value and the alphabetic product is
a string value tagged 'a-j'. The alphabetic range 'a-j' represents the numeric range '0-9'. To
produce the alphabetic product code, each digit in the numeric barcode is replaced by the
corresponding matching letters. Write an algorithm to display the alphabetic
product code from the numeric barcode.
Input
The input consists of an integer - barcode, that
represents the barcode of the product.

Output
Print a string representing the alphabetic product code

Constraints
1<barcode<10^10

Example

input
12403
Output:
bcead



*/
