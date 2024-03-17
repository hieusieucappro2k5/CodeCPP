#include<bits/stdc++.h>
#define endl "\n";
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

int main()
{
	faster
	ifstream fin("DATA.in");
	int n,m,x;
	fin>>n>>m;
	map<int,int> mp;
	set<int> s;
	while(n--)
	{
		fin>>x;
		mp[x]++;
	}
	while(m--)
	{
		fin>>x;
		if(mp[x]) 
			s.insert(x);
	}
	for(auto i:s)
		cout<<i<<" ";
	return 0;
}