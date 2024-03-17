#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	cin.ignore();
	set<string> st;
	for(int i=0;i<n;i++)
	{
		string tmp;
		getline(cin,tmp);
		st.insert(tmp);
	}
	cout<<st.size();
}