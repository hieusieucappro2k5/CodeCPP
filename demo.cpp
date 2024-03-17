#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

int main()
{
	faster
	int t;
	cin>>t;
	while(t--)
	{
		string x;
		cin>>x;
		int l=x.size();
		cin.ignore();
		string s;
		getline(cin,s);
		int ok=1;
		while(s.find(x)!=string::npos)
		{
			ok=0;
			int z=s.find(x);
			cout<<s.find(x)+1<<" ";
			for(int i=z;i<z+l;i++)
				s[i]=' ';		
		}
		if(ok)
			cout<<"-1";
		cout<<endl;
	}
	return 0;
}