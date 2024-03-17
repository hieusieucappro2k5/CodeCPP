#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l=s.size();
		map<char,int> mp;
		for(int i=0;i<l;i++)
			mp[s[i]]++;
		if(mp['D']==0)	
			for(int i=1;i<=mp['I']+1;i++)
				cout<<i;
		else if(mp['I']==0)	
			for(int i=mp['D']+1;i>0;i--)
				cout<<i;
		else 
		{
			int l=0,r=0;
			
		}		
	}
	return 0;
}