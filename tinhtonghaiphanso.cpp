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

ll lcm(ll a,ll b)
{
	return (a*b)/__gcd(a,b);
}

PhanSo tong(PhanSo A,PhanSo B)
{
	PhanSo C;
	pair<ll,ll> X=rutgon(A);
	pair<ll,ll> Y=rutgon(B);
	ll tmp=lcm(X.second,Y.second);
	C.mau=tmp;
	ll x1=(tmp/X.second)*X.first;
	ll x2=(tmp/Y.second)*Y.first;
	C.tu=x1+x2;
	return C;
}

void in(PhanSo A)
{
	cout<<A.tu<<"/"<<A.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}