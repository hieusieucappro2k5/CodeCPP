#include<bits/stdc++.h>

using namespace std;
using ll=long long ;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string N;
		cin>>N;
		ll M;
		cin>>M;
		ll tmp=0;
		int l=N.size();
		for(int i=0;i<l;i++)
		{
			tmp=tmp*10+N[i]-'0';
			tmp%=M;
		}
		cout<<tmp<<endl;
	}
}