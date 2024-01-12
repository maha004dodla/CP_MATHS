#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll N=1e6+1;
ll primes[1000001];
void create_seive()
{
	for(int i=0; i<N; i++)
	{
		primes[i]=i;
	}
	primes[0]=primes[1]=0;
	for(int i=2; i*i<=N; i++)
	{
		if(primes[i]==i)
		{
			for(int j=i*i; j<N; j+=i)
			{
				if(primes[j]==j)
				{
					primes[j]=i;
				}
			}
		}
	}
}
int main()
{
	create_seive();
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		int i;
		vector<int>l;
		for(i=0; i<n; i++)
		{
			int a;
			cin>>a;
			l.push_back(a);
		}
		vector<int>res;
		map<int,int>mp;
		for(auto i:l)
		{
			vector<int>values;
			while(i!=1)
			{
				values.push_back(primes[i]);
				i=i/primes[i];
			}
			for(auto i:values)
			{
				mp[i]++;
			}
			
		}
		int sum=1;
		for(auto i:mp)
		{
			int b=(i.second+1);
			sum*=b;
		}
		cout<<sum<<endl;
	}
}