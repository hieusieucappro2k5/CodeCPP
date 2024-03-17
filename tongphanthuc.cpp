#include<bits/stdc++.h>

using namespace std;

double sum1(int n)
{
	double sum=0;
	for(int i=1;i<=n;i++) sum=sum+(double)1/i;
	return sum;
}

int main()
{
	int n;
	cin>>n;
	cout<<fixed<<setprecision(4)<<sum1(n)<<endl;
}