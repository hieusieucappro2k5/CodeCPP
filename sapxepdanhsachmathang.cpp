#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

struct mathang{
	int ma;
	string name;
	string nhomhang;
	double loi;
};

bool cmp(mathang a,mathang b)
{
	return a.loi>b.loi;
}

void nhap(mathang *a,int n)
{
	for(int i=0;i<n;i++)
	{
		a[i].ma=i+1;
		cin.ignore();
		getline(cin,a[i].name);
		getline(cin,a[i].nhomhang);
		double mua,ban;
		cin>>mua>>ban;
		a[i].loi=ban-mua;	
	}	
}

void in(mathang a[],int n)
{
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++)
	{
		cout<<a[i].ma<<" "<<a[i].name<<" "<<a[i].nhomhang<<" "<<fixed<<setprecision(2)<<a[i].loi<<endl;
	}	
}

int main()
{
	faster
	mathang a[50];
	int n;
	cin>>n;
	nhap(a,n);
	in(a,n);
}