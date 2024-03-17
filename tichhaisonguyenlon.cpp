#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

string cong(string a,string b)
{
	int len1=a.size(),len2=b.size();
	string c;
	int nho=0;
	for(int i=0;i<len1||i<len2||nho;i++)
	{
		int dgit1=i<len1?a[len1-i-1]-'0':0;
		int dgit2=i<len2?b[len2-i-1]-'0':0;
		int tmp=dgit1+dgit2+nho;
		c+=tmp%10+'0';
		nho=tmp/10;
	}
	reverse(c.begin(),c.end());
	return c;
}

string nhan(string a,string b)
{
	int len=a.size()+b.size();
	vector<string> v;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	for(int i=0;i<b.size();++i)
	{
		string line="";
		int nho=0,u=b[i]-'0'; 
		for(int j=0;j<a.size();j++)
		{
			int tmp=u*(a[j]-'0')+nho;
			line+=tmp%10+'0';
			nho=tmp/10;
		}	
		if(nho) 
			line+=nho+'0';
		
		reverse(line.begin(),line.end());line.insert(line.size(),i,'0');
		v.push_back(line);
//		cout<<line<<endl;
	}
	string sum(len,'0');
	for(int i=0;i<v.size();i++)
	{
		sum=cong(sum,v[i]);
	}
	if(sum[0]=='0')
		sum.erase(0,1);
	return sum;
}

int main()
{
	faster
	int t;
	cin>>t;
	while(t--)
	{
		string a,b;
		cin>>a>>b;
		if(a=="0"||b=="0") cout<<0<<endl;
		else
			cout<<nhan(a,b)<<endl;
	}
	return 0;
}