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
		int l=n.size();
		int res=0;
		sort(n.begin(),n.end());
		for(int i=0;i<l;i++)
		{
			if(n[i]>='0'&&n[i]<='9')
			{
				res+=n[i]-'0';
			}
			else cout<<n[i];
		}
		cout<<res<<endl;
	}
}