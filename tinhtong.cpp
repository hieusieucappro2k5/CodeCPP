#include<bits/stdc++.h>
#define endl "\n";
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

bool check(string s)
{
	for(int i=0;i<s.size();i++)
		if(s[i]>'9'||s[i]<'0')
			return 0;
	if(s.size()>10) return 0;
	return 1;
}

int main()
{
	faster
	ll sum=0;
	ifstream fin("DATA.in");
	string s;	
	while(fin>>s)
		if(check(s))
			sum+=stoi(s);		
	fin.close();
	cout<<sum<<endl;
	return 0;
}
