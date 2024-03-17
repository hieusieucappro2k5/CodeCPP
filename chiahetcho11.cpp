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
		int tmp=0;
		for(int i=0;i<n.size();i++)
		{
			n[i]=n[i]-'0';
			tmp=tmp*10+n[i];
			tmp%=11;
		}
		if(tmp==0) cout<<"1\n";
		else cout<<"0\n";
	}
}