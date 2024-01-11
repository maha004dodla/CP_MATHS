#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll N=10000001;
ll primes[10000001];
void create_seive()
{
	for(int i=0; i<N; i++)
	{
		primes[i]=1;
	}
	primes[0]=primes[1]=0;
	for(int i=2; i*i<=N; i++)
	{
		if(primes[i]==1)
		{
			for(int j=i*i; j<N; j+=i)
			{
				primes[j]=0;
			}
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n,flag=0,count=0;
		cin>>n;
		create_seive();
		map<int,int>mp;
		vector<int>l;
		for(i=1; i<=n; i++)
		{
			if(primes[i]==1)
			{
				l.push_back(i);
				mp[i]++;
			}
		}
		for(i=0; i<l.size(); i++)
		{
			if(mp.find(l[i]+2)!=mp.end())
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
}