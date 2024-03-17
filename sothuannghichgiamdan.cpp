#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

bool thuannghich(string n)
{
	for(int i=0,j=n.size()-1;i<j;i++,j--)
		if(n[i]!=n[j]) return 0;
	return 1;	
}

bool cmp(pair<string,int> a,pair<string,int> b)
{
	if(a.first.size()==b.first.size())
		return a.first>b.first;
	return a.first.size()>b.first.size();
}

int main()
{
	faster
	map<string,int> mp;
	vector<pair<string,int>> v;
	string s;
	while(cin>>s)
	{
		if(s.size()>1&&thuannghich(s)) mp[s]++;
	}
	for(auto x:mp)
		v.push_back(make_pair(x.first,x.second));
	sort(v.begin(),v.end(),cmp);
	for(auto x:v)
		cout<<x.first<<" "<<x.second<<endl;	
	return 0;
}