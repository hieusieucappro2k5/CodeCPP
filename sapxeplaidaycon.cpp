#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,l,r;
		cin>>n;
		int a[n];
		vector<int> v;
		for(auto &x:a)
		{
			cin>>x;
			v.push_back(x);
		}
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			if(a[i]!=v[i])
			{
				l=i+1;
				break;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]!=v[i])
			{
				r=i+1;
			}
		}
		cout<<l<<" "<<r<<endl;
	}
}