#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

bool cmp(pair<int,int> a,pair<int,int> b)
{
	if(a.second == b.second)
		return a.first<b.first;
	return a.second>b.second;
}

int main()
{
	faster
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		map<int,int> mp1;
		vector<pair<int,int>   > v;
		int num=0;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			mp1[x]++;
		}	
		for(auto [x,y]:mp1)
			v.push_back(make_pair(x,y));
		sort(v.begin(),v.end(),cmp);
		for(auto x:v)
			while(x.second )
			{
				cout<<x.first<<" ";
				x.second--;
			}
		cout<<endl;
	}
	return 0;
}