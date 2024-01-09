#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j=0,val,carry=0,a;
	cin>>n;
	vector<int>l;
	l.push_back(1);
	for(i=1; i<=n; i++)
	{
		for(j=0; j<l.size(); j++)
		{
			//cout<<l[j]<<" "<<i<<" "<<carry<<endl;
			a=(l[j]*i)+carry;
			l[j]=a%10;
			carry=a/10;
		}
		//cout<<val<<" "<<carry<<endl;
		while(carry!=0)
		{
			l.push_back(carry%10);
			carry=carry/10;
		}
	}
	reverse(l.begin(),l.end());
	for(auto i:l)
	{
		cout<<i<<" ";
	}

}