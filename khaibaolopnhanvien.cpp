#include<bits/stdc++.h>
#define endl "\n";
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

class NhanVien{
	private:
		string name,sex,date,address,mathue,ngayki;
	public:
		friend istream& operator >> (istream &fin,NhanVien &a)
		{
			getline(fin,a.name);
			fin>>a.sex>>a.date;
			cin.ignore();
			getline(fin,a.address);
			fin>>a.mathue>>a.ngayki;
			return fin;
		}
		friend ostream& operator >> (ostream &fout,NhanVien a)
		{
			fout<<"00001 "<<a.name<<" "<<a.sex<<" "<<a.date<<" "<<a.address<<" "<<a.mathue<<" "<<a.ngayki;
			return fout;
		}
};

int main(){
	faster
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}