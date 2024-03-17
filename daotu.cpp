#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s,tmp;
		vector<string> v;
		getline(cin,s);
		stringstream ss(s);
		while(ss>>tmp)
			v.push_back(tmp);
		int l=v.size();
		for(int i=l-1;i>=0;i--)
			cout<<v[i]<<" ";
		cout<<endl;	
	}
	return 0;
}