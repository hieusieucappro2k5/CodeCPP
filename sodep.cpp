#include<bits/stdc++.h>

using namespace std;

bool thuannghich(string n)
{
	int l=n.size();
	for(int i=0,j=l-1;i<j;i++,j--)
	{
		if(n[i]=='1'||n[i]=='3'||n[i]=='5'||n[i]=='7'||n[i]=='9') return 0;
		if(n[j]=='1'||n[j]=='3'||n[j]=='5'||n[j]=='7'||n[j]=='9') return 0;
		if(n[i]!=n[j]) return 0;
	}
	return 1;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string n;
		cin>>n;
		if(thuannghich(n)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}