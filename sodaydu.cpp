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
		set<int> st;
		int ok=0;
		int l=n.size();
		for(int i=0;i<l;i++)
		{
			if(n[i]<'0'||n[i]>'9')
			{
				ok=1;
				break;
			}
			else
			{
				st.insert(n[i]-'0');
			}
		}
		if(ok==1||n[0]=='0') cout<<"INVALID\n";
		else
		{
			if(st.size()==10) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
}