#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

struct PhanSo{
	ll tu,mau;
};

void rutgon(PhanSo &a)
{
	ll tmp=__gcd(a.mau,a.tu);
	a.mau/=tmp;
	a.tu/=tmp;
}

ll LCM(ll a,ll b)
{
	return (a*b)/__gcd(a,b);
}

void process(PhanSo A,PhanSo B)
{
	PhanSo C,D;
	ll tmp=LCM(A.mau,B.mau);
	ll tu=A.tu*(tmp/A.mau)+B.tu*(tmp/B.mau);
	C.mau=tmp*tmp;
	C.tu=tu*tu;
	rutgon(C);
	D.tu=A.tu*B.tu*C.tu;
	D.mau=A.mau*B.mau*C.mau;
	rutgon(D);
	cout<<C.tu<<"/"<<C.mau<<" "<<D.tu<<"/"<<D.mau;
	cout<<endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}