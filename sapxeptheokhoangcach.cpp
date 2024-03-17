#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b)
{
	return a.first<b.first;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		vector<pair<int,int> > v;
		for(auto &y:a) cin>>y;
		for(int i=0;i<n;i++)
		{
			int k=abs(x-a[i])-1;
			v.push_back(make_pair(k,a[i]));
		}
		stable_sort(v.begin(),v.end(),cmp);
		for(auto y:v)
			cout<<y.second<<" ";
		cout<<endl;
	}
}