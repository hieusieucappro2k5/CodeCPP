#include<bits/stdc++.h>
#define endl "\n";
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

int main()
{
	faster
	ifstream fin("VANBAN.in");
	string s;
	set<string> st;
	while(fin>>s)
	{
		for(int i=0;i<s.size();i++)
			s[i]=tolower(s[i]);
		st.insert(s);	
	}
	for(auto x:st)
		cout<<x<<endl;
	fin.close();	
	return 0;
}