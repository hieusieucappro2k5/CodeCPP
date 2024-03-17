#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string S1,S2,tmp;
		getline(cin,S1);
		getline(cin,S2);
		stringstream ss2(S2);
		stringstream ss1(S1);
		vector<string> S02;
		set<string> S01;
		while(ss2>>tmp)
		{
			S02.push_back(tmp);
		}
		while(ss1>>tmp)
		{
			if(find(S02.begin(),S02.end(),tmp)==S02.end())
				S01.insert(tmp);
		}
		for(auto x:S01)
			cout<<x<<" ";
		cout<<endl;	
	}
}