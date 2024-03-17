#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	set<int> st;
	for(auto &x:a) 
	{
		cin>>x;
		st.insert(x);
	}
	for(auto x:st) cout<<x<<" ";
}