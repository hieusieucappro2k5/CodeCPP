#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,Q;
		cin>>n>>Q;
		int a[n];
		for(auto &x:a) cin>>x;
		for(int i=0;i<Q;i++)
		{
			int x,y;
			cin>>x>>y;
			int sum=0;
			for(int i=x-1;i<y;i++) sum+=a[i];
			cout<<sum<<endl;
		}
	}
}