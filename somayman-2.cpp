#include<bits/stdc++.h>

using namespace std;

bool sumdigit(string n)
{
	int l=n.size(),sum=0;
	for(int i=0;i<l;i++)
	{
		int k=n[i]-'0';
		sum+=k;
	}
	int result=0;
	while(sum>=10)
	{
		while(sum)
		{
			result+=sum%10;
			sum/=10;
		}
		if(result>=10)
		{
			sum=result;
			result=0;
		}
//		return result==9;
	}
//	result=sum;
	if(sum<10&&sum==9) return 1;
	return result==9;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string n;
		cin>>n;
		if(sumdigit(n)) cout<<"1\n";
		else cout<<"0\n";
	}
}