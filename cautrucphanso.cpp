#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

struct PhanSo{
	ll tu;
	ll mau;
};

void nhap(PhanSo &a)
{
	cin>>a.tu;
	cin>>a.mau;
}

pair<ll,ll> rutgon(PhanSo A)
{
	ll tmp=__gcd(A.mau,A.tu);
	return make_pair(A.tu/tmp,A.mau/tmp);
}

void in(PhanSo A)
{
	pair<ll,ll> res=rutgon(A);
	cout<<res.first<<"/"<<res.second;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}