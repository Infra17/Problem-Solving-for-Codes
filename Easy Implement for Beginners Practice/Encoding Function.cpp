#include <bits/stdc++.h>
using namespace std;
 
string encode (string s, int k) {
    for(int i=0; i<s.length(); i++)
    {
        if(isalpha(s[i]))
        {
            if(s[i]<91) {
                s[i]+=k;if(s[i]>90) s[i]-=26;
                }
            else {s[i]+=k;if(s[i]>122) s[i]-=26;}
        }
    } 
    return s;
 
}
int main() {
    string s1,p;
    int a;
    getline(cin,s1);
    cin>>a;             
    p=encode(s1, a);   
    cout<<p;
    return 0;
}

/*
Question : Encoding Function
(Bitcanny)
Write an encoding function.
encoding has the following parameter(s):
string s: cleartext
int k: the alphabet rotation factor
Returns
string: the encoded string
Input Format:
The first line contains the unencoded string, s.
The second line contains k, the number of letters to rotate the alphabet by.
Constraints:
1<length(s)<=100
0<=k<=100
 s is a valid ASCII string without any spaces.
Input parameters
middle-Outz
2
Return output:
okffng-Qwvb
Explanation:
Original alphabet:  	abcdefghijklmnopqrstuvwxyz
Alphabet rotated +2:	cdefghijklmnopqrstuvwxyzab
m -> o
i -> k
d -> f
d -> f
l -> n
e -> g
-	-
O -> Q
u -> w
t -> v
z -> b
Note: You need to complete one of below functions in any one of language (C++, Java, JavaScript):
*/
