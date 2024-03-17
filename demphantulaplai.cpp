#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		map<int,int> mp;
		for(auto &x:a)
		{
			cin>>x;
			mp[x]++;
		}
		int res=0;
		for(auto x:mp)
		{
			if(x.second>=2) 
				res+=x.second;
		}
		cout<<res<<endl;
	}
}