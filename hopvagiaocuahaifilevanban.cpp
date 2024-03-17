#include<bits/stdc++.h>
#define endl "\n";
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

void Do(string &s){
    for(int i=0;i<s.size();i++)
        s[i]=tolower(s[i]);
}

int main()
{
	faster
	ifstream fin1,fin2;
	fin1.open("DATA1.in");
	string s;
	set<string> st;
	map<string,int> mp1,mp2;
	while(fin1>>s)
	{
		Do(s);
		st.insert(s);
		mp1[s]++;
	}
	fin1.close();
	fin2.open("DATA2.in");
	while(fin2>>s)
	{
		Do(s);
		st.insert(s);
		mp2[s]++;
	}
	fin2.close();
	for(auto x:st)
		cout<<x<<" ";
	cout<<endl;	
	for(auto x:mp1)
		if(mp2[x.first]>0)
			cout<<x.first<<" ";
	return 0;
}