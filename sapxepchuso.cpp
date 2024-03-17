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
			while(x)
			{
				st.insert(x%10);
				x/=10;
			}
		}
		for(auto x:st) cout<<x<<" ";
		cout<<endl;
	}
}