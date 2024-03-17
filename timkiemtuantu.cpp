#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<int> a(n);
		for(auto &x:a) cin>>x;
		if(find(a.begin(),a.end(),k)!=a.end())
			cout<<find(a.begin(),a.end(),k)-a.begin()+1<<endl;
		else cout<<"-1\n";	
	}
}