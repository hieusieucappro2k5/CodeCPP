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
		for(int i=0;i<n-1;i++)
		{
			int x;
			cin>>x;
			st.insert(x);
		}
		int ok=0,res=0;
		for(int i=1;i<1e7;i++)
		{
			if(st.find(i)==st.end())
			{
				res=i;
				ok=1;
				break;
			}
		}
		if(ok)		
			cout<<res<<endl;
	}
	return 0;
}