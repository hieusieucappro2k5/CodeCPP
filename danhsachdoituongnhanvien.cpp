#include<bits/stdc++.h>
#define endl "\n";
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

class NhanVien{
	private:
		string name,sex,date,address,mathue,ngayki;
		string manv;
		static int dem;
	public:
		friend istream& operator >> (istream &fin,NhanVien &a)
		{
			dem++;
			string tmp="";
			a.manv=tmp.insert(0,5-to_string(dem).length(),'0')+to_string(dem);
			cin.ignore();
			getline(fin,a.name);
			fin>>a.sex>>a.date;
			cin.ignore();
			getline(fin,a.address);
			fin>>a.mathue>>a.ngayki;
			return fin;
		}
		friend ostream& operator << (ostream &fout,NhanVien a)
		{
			fout<<a.manv<<" "<<a.name<<" "<<a.sex<<" "<<a.date<<" "<<a.address<<" "<<a.mathue<<" "<<a.ngayki<<endl;
			return fout;
		}
};

int NhanVien::dem=0;

int main(){
	faster
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
