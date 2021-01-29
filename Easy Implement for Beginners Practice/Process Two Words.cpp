#include <bits/stdc++.h>
using namespace std;

string fun(string s)
{
    int n=s.length();
    string st="",ans="";
    if(n&1)
    {
        st+=s.substr(0,n/2+1);
        reverse(st.begin(),st.end());
        ans+=st + s.substr(n/2,n/2+1);
        return ans;
    }
     st+=s.substr(0,n/2);
     reverse(st.begin(),st.end());
        ans+= st + s.substr(n/2,n/2);

        return ans;
}

int main()
{
   string st;int n;
    getline(cin,st);
    vector<string> arr;
    istringstream ss(st);
    do {
            string word;
            ss >> word;
            arr.push_back(word);
        } while (ss);
    cin>>n;

    cout<<fun(arr[n/10-1])<<" "<<fun(arr[n%10-1]);
}

/*
Solution in Python:
#Rahit :
def word(a):
    
    n=len(a)
    if n%2==0:
        s=a[(n//2)-1::-1]+a[(n//2):]
        
    else:
        s=a[(n//2)::-1]+a[(n//2):]
        
    return s

a=list(map(str,input().split()))
n=list(input())

s=''

for i in n:
    s+=word(a[int(i)-1])
    s+=' '
    
print(s[:-1])


*/

/*
Process Two Words

You are provided a string of words and a 2-digit number. The two digit number represents the two words that are to be processed.
For example, if the string is "Today is a Nice day" and the 2 digit number is 41 then, you are expected to process the 4th word ("Nice") and the 1st word ("Today").

The processing of each word is to be done as follows:

   Extract the Middle-to-Begin part: starting from the middle character of the word till the beginning of the word.

  Extract the Middle-to-End part: Starting from the middle character of the word till the end of the world.

If the word to be processed is "Nice",
  
     Its Middle-to-Begin part will be "iN"

    Its Middle-to-End part will be "ce"

So, merged together these two parts would form "iNce"

Similarly, if the word to be processed is "Today",

   Its Middle-to-Begin part will be "doT"

   Its Middle-to-End end part will be "day"

So, merged together these two parts would form "doTday"

Note: Note that the middle letter "d" is part of both the extracted parts. So, fore words whose length is odd, the middle letter should be included in both the extracted parts.

Expected output: the expected output is a string containing both the processed words separated by a space "iNce doTday"

Example 1:

Input 1 = "Today is a nice day"

Input 2 = 41

Output = "ince doTday"

Example 2:

Input1 = "Fruits like Mango and Apple are common but Grapes are rare"

Input 2 = 39

Output = "naMngo arGpes"

Note: The input string Input 1 will contain only alphabets and a single space character separating each word in the string.

Note: The input string Input1 will NOT contain any other special characters.

Note: The input number Input2 will always be a 2 digit number (>=11 and <=99), any of its digits will never be 0. Both the digits of the number will always point to a a valid word in the input1 string.

*/
