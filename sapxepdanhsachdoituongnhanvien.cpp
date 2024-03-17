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
		string getdate()
		{
			return this->date;
		}
		friend ostream& operator << (ostream &fout,NhanVien a)
		{
			fout<<a.manv<<" "<<a.name<<" "<<a.sex<<" "<<a.date
			<<" "<<a.address<<" "<<a.mathue<<" "<<a.ngayki<<endl;
			return fout;
		}
};

int NhanVien::dem=0;

bool cmp(NhanVien a,NhanVien b)
{
	string day1,day2,month1,month2,year1,year2;
	day1=a.getdate().substr(3,2);
	day2=b.getdate().substr(3,2);
	month1=a.getdate().substr(0,2);
	month2=b.getdate().substr(0,2);
	year1=a.getdate().substr(6);
	year2=b.getdate().substr(6);
	if(year1!=year2)
		return year1<year2;
	if(month1!=month2)
		return month1<month2;
	return day1<day2;		
}

void sapxep(NhanVien *ds,int n)
{
	sort(ds,ds+n,cmp);
}

int main(){
	faster
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}