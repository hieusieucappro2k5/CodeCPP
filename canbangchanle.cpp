#include<bits/stdc++.h>

using namespace std;

bool sum1(int n)
{
	int cnt1=0,cnt2=0;
	while(n)
	{
		if(n%2) cnt1++;
		else cnt2++;
		n/=10;
	}
	if(cnt1==cnt2) return true; 
	return false;
}

int main()
{
	int n;
	cin>>n;
	int l=pow(10,n-1);
	int r=pow(10,n);
	int cnt=0;
	for(int i=l;i<r;i++) 
	{
		if(sum1(i)) 
		{
			cout<<i<<" ";
			cnt++;
		}
		if(cnt%10==0&&i%10==9) cout<<endl;
//		while(i)
	}
}