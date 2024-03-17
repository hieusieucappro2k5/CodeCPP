#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

struct CNTT{
	int stt;
	string masv,name,Class,email,dn;
};

void nhap(CNTT *a,int n)
{
	for(int i=0;i<n;i++)
	{
		a[i].stt=i+1;
		cin>>a[i].masv;
		cin.ignore();
		getline(cin,a[i].name);
		cin>>a[i].Class>>a[i].email>>a[i].dn;
	}
}

void in(CNTT a)
{
	cout<<a.stt<<" "<<a.masv<<" "<<a.name<<" "<<a.Class<<" "<<a.email<<" "<<a.dn<<endl;
}

bool cmp(CNTT a,CNTT b)
{
	return a.name<b.name;
}
int main()
{
	faster
	int n;
	cin>>n;
	CNTT a[n];
	nhap(a,n);
	int q;
	cin>>q;
	while(q--)
	{
		string s;
		cin>>s;
		vector<CNTT> v;
		for(int i=0;i<n;i++)
			if(a[i].dn==s)
			{
				v.push_back(a[i]);
			}
		sort(v.begin(),v.end(),cmp);
		for(int i=0;i<v.size();i++)
		{
			in(v[i]);	
		}	
	}
	return 0;
}