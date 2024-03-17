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
		int a[n],b[m];
		vector<int> v;
		map<int,int> mp;
		for(auto &x:a)
		{
			cin>>x;
			mp[x]++;
		}
		for(auto &x:b) cin>>x;
		sort(a,a+n);
		for(auto x:b) 
		{
			int k=mp[x];
			for(int i=0;i<k;i++)
			{
				v.push_back(x); 
				mp[x]--;
			}
		}
		for(auto x:a)
		{	
			if(mp[x])
				v.push_back(x);	
		}	
		for(auto x:v) cout<<x<<" ";
		cout<<endl;
	}
}