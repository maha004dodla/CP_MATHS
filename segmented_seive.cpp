#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n1=10000001;
vector<ll>primes(n1+1,1);
void create_seive()
{
	int i,j;
	primes[0]=primes[1]=1;
	for(i=2; i*i<=n1; i++)
	{
		if(primes[i]==1)
		{
			for(j=i*i; j<n1; j+=i)
			{
				primes[j]=0;
			}
		}
	}
}
int main()
{
	int n;
	cin>>n;
	create_seive();
	while(n--)
	{
		vector<int>vec;
		int a,l,r,i,j,size,val;
		cin>>l>>r;
		size=r-l+1;
		val=sqrt(r);
		// cout<<val<<endl;
		vector<int>values(size,1);
		for(i=2; i<=val; i++) 
		{
			int k=(l/i)*i;
	        if(primes[i]==1) 
	        {
	        	if(k<l)
	        	{
	        		k=k+i;
	        	}
		        for(j=k; j<=r; j+=i)
		        {
		          	values[j-l]=0;
	            }
	        }
    	}
	    for(i=l; i<=r; i++) 
	    {
	        if(values[i-l]!=0) 
	        {
	            cout<<i<<" ";
	        }
	    }
	}
}




