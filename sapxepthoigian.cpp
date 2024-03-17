#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

struct tg{
	int h,m,s;
};

void nhap(tg &a)
{
	cin>>a.h>>a.m>>a.s;
}

bool cmp(tg a,tg b)
{
	if(a.h!=b.h) 
		return a.h<b.h;
	if(a.m!=b.m)
		return a.m<b.m;
	return a.s<b.s;		
}

int main()
{
	faster
	int n;
	cin>>n;
	tg a[n];
	for(int i=0;i<n;i++)
		nhap(a[i]);
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++)
	{
		cout<<a[i].h<<" "<<a[i].m<<" "<<a[i].s<<endl;
	}
	return 0;
}