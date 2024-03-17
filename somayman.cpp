#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int tmp1=n%10;
		n/=10;
		int tmp2=n%10;
		if(tmp1==6&&tmp2==8) cout<<"1\n";
		else cout<<"0\n";
	}
}