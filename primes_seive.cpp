#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll N=1e6+1;
ll primes[10000001];//1e6+1
void create_seive()
{
	for(int i=0; i<N; i++)
	{
		primes[i]=1;
	}
	primes[0]=primes[1]=0;
	for(int i=2; i*i<=N; i++)//loop for first multiple
	{
		if(primes[i]==1)
		{
			for(int j=i*i; j<N; j+=i)//loop for next multiple nd incrementing by first multiple times
			{
				primes[j]=0;
			}
		}
	}
}
int main()
{
	create_seive();
	ll n;
	cin>>n;
	while(n--)
	{
		ll a,b,i,c=0;
		cin>>a>>b;
		for(i=a; i<=b; i++)
		{
			if(primes[i]==1)
			{
				c++;
			}
		}
		cout<<c<<endl;
	}
}