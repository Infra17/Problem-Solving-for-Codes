//Hard : GT, DSU, Recursion
#include <bits/stdc++.h>
using namespace std;
string s,ans="";
unordered_map<char,int> root,child,flag;//rootOf,childOf
map<pair<char,char>,int> duplicateedgecheck;//Duplicate edge check
unordered_map<char,char> par,ch[2],monitor;
char find(char c)
{
    if(monitor[c]) return monitor[c]; //##
    if(root[c]==0) return monitor[c]=c;
    return monitor[c]=find(par[c]);
}

void makeans(char c)
{
    if(flag[c]==0){
    ans+=c;flag[c]++;
    if(child[c]==2){ans+='(';makeans(min(ch[0][c],ch[1][c]));ans+='(';makeans(max(ch[0][c],ch[1][c]));}
    else
    for(int i=0;i<child[c];i++)
    {ans+='(';makeans(ch[i][c]);}
    ans+=')';}
}

int main()
{
    getline(cin,s);
    for(int i=0;i<26;i++)
    {
        root['A'+i]=-5;
    }
    for(int i=0;i<s.length();i++)
        if(s[i]=='(')
        {
            child[s[i+1]]++;root[s[i+3]]=root[s[i+3]]==-5?1:root[s[i+3]]++; duplicateedgecheck[{min(s[i+1],s[i+3]),max(s[i+1],s[i+3])}]++; root[s[i+1]]==-5?root[s[i+1]]=0:1;
            //cout<<s[i+1]<<s[i+3];
            ch[0][s[i+1]]=='\0'?ch[0][s[i+1]]=s[i+3]:ch[1][s[i+1]]=s[i+3];par[s[i+3]]=s[i+1];
            if(child[s[i+1]]>2){cout<<"E1";return 0;}
            if(duplicateedgecheck[{min(s[i+1],s[i+3]),max(s[i+1],s[i+3])}]>1){cout<<"E2";return 0;}
            if(find(s[i+1])==find(s[i+3])&&s[i+1]!=par[s[i+3]]){cout<<"E3";return 0;}
            if(root[s[i+3]]>1){cout<<"E4";return 0;}
            if(s[i+4]!=')'||s[i+2]!=','){cout<<"E5";return 0;}
            //i+=5;
        }
    for(int i=0;i<26;i++)
    {
        if(root['A'+i]==0) makeans('A'+i);
    }
    cout<<ans;
}

/*
Is this a tree?

A binary tree is  represented as a sequence of parent-child pairs

E x- (A,B) (A,C) (B,G) (C,H) (E,F) (B,D) (C,E) .

A tree with those edges may be illustrated in many ways.Here are two:

                  A                          A
                /    \                    /     \
              B        C                 B      C
            /   \     /  \             /   \    /  \
          D    G  E   H   D            G   E   H
                     /                          \
                    F                            F
                    
The following is a recursive definition for the S-expression of a tree.

S-exp(node)=(node->val(S-exp(node->first_child))(S-exp(node->second_child))),if node
!NULL=””,node= =NULL
         Where first_child->val<second _child->val(first_child->val is lexicographically than second_child->val)

This tree can be represented in S-expression in multiple ways.The lexicographically smallest way of expressing it as follows:
(A(B(D)(G))(C(E(F))(H)))

Translate the node-pair representation into its lexicographically smallest S-expression or report any errors that do not conform to the definition of the binary tree.

The List of errors with their codes is as follows: 

Error Code                   Type of Error
   E1                            More than 2 children
   E2                            Duplicate Edges
   E3                            Cycle Present(node is direct descendant of more than one node)
   E4                            Multiple Roots
   E5                            Any other error

Functional Description

Complete the function sExpression in the editor below.
The function must return either the lexicographically lowest S-expression or the lexicographically lowest error code as a string.

sExpression has the following parameter(s):
Nodes:a string of space-separated parenthetical elements,each of which contains the name of two nodes connected by a comma.

Constraints:
All node names are single characters in the range ascii[A-Z].
The maximum node count is 26.
There is no specific order to the input (parent,child) pairs.

>Input Format for Custom Testing

>Sample Case 0

Sample Input 0

(B,D) (D,E) (A,B) (C,F) (E,G) (A,C)

Sample output 0
(A(B(D(E(G))))(C(F)))
Explanation 0
A representation of tree is as follows:

             A
           /    \
         B      C
        /         \
       D           F
      /
     E
    /
  G

*/
