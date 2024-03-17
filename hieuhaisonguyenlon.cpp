#include<bits/stdc++.h>

using namespace std;

string hieu(string x,string y,string res) {
	
	int num=0;
	int nho=0;
	if(x.size()>y.size()) y.insert(0,x.size()-y.size(),'0');
	else if(x.size()<y.size()) x.insert(0,y.size()-x.size(),'0');
	int l=x.size();
	if(x<y)
	{
		string c=x;
		x=y;
		y=c;
	}
	for(int i=l-1;i>=0; i--) {
		int tmp=x[i]-y[i]-nho;
		if (tmp<0) 
		{
			tmp+=10;
			nho=1;
		}
		else 
		{
			nho=0;
		}
		res.push_back(tmp%10+'0');
	}
	reverse(res.begin(),res.end());
	return res;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--) {
		string x,y,res;
		cin>>x>>y;
		res=hieu(x,y,res);
		cout<<res<<endl;
	}
}