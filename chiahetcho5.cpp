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
		int k=n.size();
		int r=0;
		for(int i=0;i<k;i++)
		{
			int tmp=n[i]-'0';
			r=2*r+tmp;
			r%=5;
		}
		if(r==0) cout<<"Yes\n";
		else cout<<"No\n"; 
	}
}