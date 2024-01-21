#include<bits/stdc++.h>
using namespace std;
vector<vector<long long>>pascal;
long long mod=1e9;
void ans(long long n)
{
    pascal.push_back({1,1});
    long long size=2;
    for(long long i=1; i<n; i++)
    {
        
        vector<long long>l;
        l.push_back(1);
        for(long long j=1; j<size; j++)
        {
            long long val=pascal[i-1][j-1]%mod+pascal[i-1][j]%mod;
            l.push_back(val%mod);
        }
        l.push_back(1);
        size=l.size();
        pascal.push_back(l);
    }
}
int main()
{
    long long t,n;
    cin>>t;
    ans(1000);
    for(auto i:pascal)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}
