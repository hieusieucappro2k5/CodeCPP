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
		map<char,int> mp;
		for(int i=0;i<l;i++)
			mp[n[i]]++;
		int Max=0;
		for(auto x:mp)
			Max=max(Max,x.second);
		if(Max*2-1<=l) cout<<"1\n";
		else cout<<"0\n";
	}
}