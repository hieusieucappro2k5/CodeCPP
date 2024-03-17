#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<ll> a(n);
		for(auto &x:a) cin>>x;
		for(int i=0;i<n;i++)
		{
			if(find(a.begin(),a.end(),i)!=a.end()) cout<<i<<" ";
			else cout<<"-1 ";
		}
		cout<<endl;
	}
}