#include<bits/stdc++.h>
#define endl "\n";
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main()
{
	faster
	ifstream fin("DATA.in");
	int n;
	map<int,int> mp;
	while(fin>>n)
		mp[n]++;
	for(auto x:mp)
		cout<<x.first<<" "<<x.second<<endl;	
	fin.close();
	return 0;		
}