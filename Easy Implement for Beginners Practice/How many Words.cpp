#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int ans=0;
    istringstream ss(s);
    while(ss)
    {
        string word;
        int flag=0;
        ss>>word;
        if(word=="") break;
        for(int i=0;i<word.length();i++)
        if(!isalpha(word[i]))
        {
            if(i!=0){
            if(i==word.length()-1){
            if(word[i]==','||word[i]=='.'||word[i]==';'||word[i]==':'||word[i]=='?'||word[i]=='!') continue;}
            else if(word[i]=='.'&&word[i+1]!='.') {flag++;break;}
            else if(word[i]=='-'&&isalpha(word[i+1])) continue;
            else {flag++;break;}
            }
            else
            {
                flag++;break;
            }
        }

        if(flag==0) {ans++;
        //cout<<word<<" "<<word.length()<<endl;
        }
    }
    cout<<ans;
}

/*
Solution in Python :
#Rahit:
s=input()
n=len(s)
s1=''
for i in range(n):
    if s[i]=='-':
        s1+=''
        continue
    if s[i]=='.' or s[i]=='!' or s[i]==',' or s[i]=='?':
        s1+=' '
        continue
    else:
        s1+=s[i]
    
a=list(s1.split())
c=0

for i in a:
    i1=0
    for j in i:
        if not ((ord(j)>=65 and ord(j)<=90) or (ord(j)>=97 and ord(j)<=122)):
            i1=1
            break
    if i1==0:
        c+=1
        
print(c)


*/

/*
How Many Words

A sentence is made up of a group of words. Each word is a sequence of letters, ('a'-'z' , 'A'-'Z'), that may contain one or more hyphens and may end in a punctuation mark: period(.) , Comma(,), question mark (?) Aur exclamation point (!). Words will be separated by one or more whitespace characters. Hyphens join two words into one and would be retained while the other punctuation marks should be stripped. Determine the number of words in a given sentence.

Example:

s= ' how many eggs are in a half-dozen, 13?'

The list of words in the string is ['How','many','eggs','are','in','a','half-dozen'] and the number of words is 7. Notice that the numeric string, '13', is not a word because it is not written in the allowed character set.

Function description

Complete the function howMany in the editor below.

howMany has the following parameter(s):

   sentence: a string

Returns:

  int: an integer that represent the number of words in the string.

Constraints

  • 0< length of s <= 10^5

Sample Case 0

Sample input

he is a good programmer , he won 865 competitions , but sometimes he dont , what do you think? All test-cases should pass , Done-done?

Sample output:

21

Explanation

The substring '865' is not a word, so is not included in the count. The hyphenated words 'test-cases' and 'Done-done' each count as 1 word. The total number of words in the string is 21.

Sample Case 1

Sample input:

jds dsaf lkdf kdsa fkldsf, adsbf ldka ads? asd bfdal ds bf[l,  akf dhj ds 878  dwa WE DE 7475 dsfh ds   RAMU 748 dj.

Sample output

21

Explanation

Note that the substring 'bf[l' is not a word because of the invalid character. Other substrings that are not words are '878' , '7475'  and '748' . The total number of words in the string is 21.





*/
