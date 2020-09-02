//problem : So NP (Hackerraank-Connected Components)
//https://www.hackerearth.com/practice/algorithms/graphs/graph-representation/practice-problems/algorithm/so-np-c559f406/description/
//Author : Infra
//Status : Accepted

#include<bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL);
#define booster cout.tie(NULL)
typedef long long int lld;
#define mod 1000000007
using namespace std;

class gr
{
	public:
	int n,co;list<int> *ad;int *v;
	gr(int a)
	{
		n=a;co=0;
		ad= new list<int>[a];
		v= new int[n];
		for(int i=0;i<n;i++)v[i]=0;
	}
	~gr(){delete[] ad;}
	void join(int a,int b)
	{
		ad[a].push_back(b);
		ad[b].push_back(a);
	}
	void count()
	{
		for(int i=0;i<n;i++)
		{
			if(v[i]==0)
			{dfs(i);co++;}
		}
		
	}
	void dfs(int a)
	{
		v[a]=1;
		list<int>::iterator i;
		for(i=ad[a].begin();i!=ad[a].end();++i)
		if(v[*i]==0) dfs(*i);
	}

};

int main()
{
	speed;
	int n,m,M,k,a,b;
	cin>>n>>m>>k;M=m;
	gr g(n);
	while(m--)
	{cin>>a>>b;g.join(a-1,b-1);}
	g.count();
	if(g.co > k){cout<<-1;return 0;}

	if(M==0){cout<<0;return 0;}
	if(g.co==1){cout<< k+ M + 1 - n- g.co;return 0;}
	else if(k==n){cout<<M;}
	else
	cout<< k+ M + 2 - n- g.co;
}
