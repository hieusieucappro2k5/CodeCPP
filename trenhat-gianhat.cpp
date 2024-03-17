#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

struct ngaysinh{
	string name date;
};

void input(ngaysinh *a,int n)
{
	for(int i=0;i<n;i++)	
		cin>>a[i].name>>a[i].date;
}

bool cmp(ngaysinh A,ngaysinh B)
{
	string day1,day2,month1,month2,year1,year2;
	day1=A.date.substr(0,2);
	day2=B.date.substr(0,2);
	month1=A.date.substr(3,2);
	month2=B.date.substr(3,2);
	year1=A.date.substr(6);
	year2=B.date.substr(6);
	if(year1!=year2)
		return year1>year2;
	if(month1!=month2)
		return month1>month2;
	return day1>day2;	
}

void in(ngaysinh a[],int n)
{
	sort(a,a+n,cmp);
	cout<<a[0].name<<endl;
	cout<<a[n-1].name<<endl;
}

int main()
{
	faster
	int n;
	cin>>n;
	ngaysinh a[n];
	input(a,n);
	in(a,n);
	return 0;
}