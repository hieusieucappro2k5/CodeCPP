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
		auto r=st.begin();
		auto l=st.end();
		l--;
		int result= *l-*r+1-st.size();
		cout<<result<<endl;
	}
}