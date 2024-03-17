#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string x,y;
		cin>>x>>y;
		int l=x.size(),r=y.size();
		char a[1000];
		int num=0;
		int nho=0;
		for(int i=0;i<l||i<r||nho;i++)
		{
			int dgit1=i<l?x[l-i-1]-'0':0;
			int dgit2=i<r?y[r-i-1]-'0':0;
			int tmp=dgit1+dgit2+nho;
			nho=tmp/10;
			a[num++]=tmp%10+'0';		
		}
		a[num]='\0';
		reverse(a,a+num);
		cout<<a<<endl;
	}
}