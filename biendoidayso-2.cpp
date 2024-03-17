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
		vector<int> v;
		for(auto &x:a) cin>>x;
		int k=a[0]*a[1];
		v.push_back(k);
		for(int i=1;i<n-1;i++)
		{
			int r=a[i-1]*a[i+1];
			v.push_back(r);
		}
		k=a[n-1]*a[n-2];
		v.push_back(k);
		for(auto x:v) cout<<x<<" ";
		cout<<endl;
		
	}
}