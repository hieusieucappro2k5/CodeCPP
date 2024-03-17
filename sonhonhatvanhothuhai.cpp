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
		set<int> st;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			st.insert(x);
		}
		if(st.size()==1) cout<<"-1";
		else 
		{
			int cnt=0;
			for(auto x:st)
			{
				cout<<x<<" ";
				cnt++;
				if(cnt==2) break;
			}
		}
		cout<<endl;
	}
}