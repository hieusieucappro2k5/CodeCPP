#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n];
		map<int,int> mp;
		for(auto &x:a)
		{
			cin>>x;
			mp[x]++;
		}
		if(mp[m]) cout<<mp[m]<<endl;
		else cout<<"-1\n";
	}
}