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
		int a[n*m];
		for(auto &x:a) cin>>x;
		sort(a,a+n*m);
		for(auto x:a) cout<<x<<" ";
		cout<<endl;
	}
}