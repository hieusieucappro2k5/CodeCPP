#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string n;
		cin>>n;
		int k;
		cin>>k;
		set<char> st;
		int tmp=n.size();
		for(int i=0;i<tmp;i++)
		{
			st.insert(n[i]);
		}
		if(26-st.size()>k) cout<<"0\n";
		else cout<<"1\n";
	}
}