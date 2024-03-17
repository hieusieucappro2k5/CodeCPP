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
		int l=n.length();
		int ok=1;
		for(int i=0;i<l;i++)
			if(n[i]!='0'&&n[i]!='8'&&n[i]!='6') ok=0;
		if(ok) cout<<"YES\n";
		else cout<<"NO\n";	 
	}
}