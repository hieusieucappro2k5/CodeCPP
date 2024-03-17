#include<bits/stdc++.h>
#define endl "\n";
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

ll lcm (ll a,ll b)
{
	return (a*b)/__gcd(a,b);
}

class PhanSo{
	private:
		ll tu,mau;
	public:
		PhanSo(ll atu,ll mau)
		{
			this->tu=tu;
			this->mau=mau;
		}
		friend istream& operator >> (istream &fin,PhanSo &a)
		{
			fin>>a.tu>>a.mau;
			return fin;
		}
		void rutgon()
		{
			ll tmp=__gcd(this->mau,this->tu);
			this->mau/=tmp;
			this->tu/=tmp;
		}
		
		friend ostream& operator << (ostream &fout,PhanSo a)
		{
			fout<<a.tu<<"/"<<a.mau;
			return fout;
		}
		friend PhanSo operator + (PhanSo a,PhanSo b)
		{
			PhanSo res(1,1);
			res.tu=a.tu*b.mau+a.mau*b.tu;
			res.mau=a.mau*b.mau;
			res.rutgon();
			return res;
		}
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}