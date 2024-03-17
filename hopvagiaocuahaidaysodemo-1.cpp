#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main()
{
	faster 
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		set<int> st;
		vector<int> v;
		map<int,int> mp;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			st.insert(x);
			mp[x]++;
		}
		for(int j=0;j<m;j++) 
		{
			int x;
			cin>>x;
			st.insert(x);
			if(mp[x])
			{
				v.push_back(x);
			}
		}
		for(auto x:st) cout<<x<<" ";
		cout<<endl;
		for(auto x:v) cout<<x<<" ";
		cout<<endl;
	}
	return 0;
}