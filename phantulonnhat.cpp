#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(auto &x:a) cin>>x;
		int max1=0;
		for(int i=0;i<n;i++) max1=max(max1,a[i]);
		cout<<max1<<endl;
	}
}