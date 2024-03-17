#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

string hieu(string x,string y) 
{	
	string res;
	int nho=0;
	if(x.size()>y.size()) y.insert(0,x.size()-y.size(),'0');
	else if(x.size()<y.size()) x.insert(0,y.size()-x.size(),'0');
	int l=x.size();
	for(int i=l-1;i>=0; i--) {
		int tmp=x[i]-y[i]-nho;
		if (tmp<0) 
		{
			tmp+=10;
			nho=1;
		}
		else 
			nho=0;
		res.push_back(tmp%10+'0');
	}
	reverse(res.begin(),res.end());
	while(res[0]=='0')
		res.erase(0,1);
	return res;
}

string chia(string a,string b)
{
	if((a.size() == b.size() && a < b) || a.size() < b.size())
		return "0";
	int l=a.size();
	string res="";
	string kq="0";
	for(int i=0;i<l;i++)
	{
		res+=a[i];
		int cnt=0;
		if(res.size()<b.size()||(res.size()==b.size()&&res<b))
			kq+='0';
		else if(res.size()>b.size()||(res.size()==b.size()&&res>=b))
		{
			while(res.size()>b.size()||(res.size()==b.size()&&res>=b))
			{
				res=hieu(res,b);
				cnt++;
			}	
			if(res==b) 
			{
				res='0';
				cnt++;
			}	
			kq+=cnt+'0';
		}	
		while(res[0]=='0')
			res.erase(0,1);
	}
	while(kq[0] == '0')
		kq.erase(0, 1);
	return kq;
}

int main()
{
	faster
	int t;
	cin>>t;
	while(t--)
	{
		string A,B;
		cin>>A>>B;
	
		cout<<chia(A,B)<<endl;
	}
	return 0;
}