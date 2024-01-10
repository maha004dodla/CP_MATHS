#include<bits/stdc++.h>
using namespace std;
int BinExp(int a,int b)
{
	int ans=1;
	while(b)
	{
		if(b&1)
		{
			b=b-1;
			ans*=a;
		}
		else
		{
			b=b/2;
			a=a*a;
		}
	}
	return ans;
}
int inverse(int val,int mod)
{
	return BinExp(val,mod-2);
}
int main()
{
	int a,b,mod;
	cin>>a>>b>>mod;
	int ans1=BinExp(a,b);
	int inv=inverse(b,mod);
	cout<<ans1<<" "<<inv<<endl;
}