#include<bits/stdc++.h>
#define endl "\n";
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

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
};

int main() {
	faster
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}