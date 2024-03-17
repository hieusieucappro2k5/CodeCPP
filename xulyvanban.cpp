#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

int main()
{
	string s;
	int ok=1;
	while(cin>>s)
	{
		int n=s.size();
		for(int i=0;i<n;i++)
		{
			s[i]=tolower(s[i]);
		}
		if(ok)
		{
			s[0]-=32;
			ok=0;
		}
		if(s[n-1]=='.'||s[n-1]=='?'||s[n-1]=='!')
		{
			s.erase(n-1);
			cout<<s<<endl;
			ok=1;
		}	
		else
			cout<<s<<" ";
	}
	return 0;
}