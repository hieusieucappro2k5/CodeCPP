#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,K;
		cin>>n>>K;
		set<int> st;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			st.insert(x);
		}
		int ok=0;
		for(auto x:st)
		{
			int k=K+x;
			if(st.find(k)!=st.end())
			{
				ok=1;
				break;
			}
		}
		if(ok) cout<<"1\n";
		else cout<<"-1\n";
	}
}