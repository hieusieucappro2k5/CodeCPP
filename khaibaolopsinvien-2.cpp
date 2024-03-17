#include<bits/stdc++.h>
#define endl "\n";
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

class SinhVien{
	private:
		string name,Class,date;
		double gpa;
	public:
		friend istream& operator >> (istream &fin,SinhVien &a)
		{
			getline(fin,a.name);
			fin>>a.Class>>a.date>>a.gpa;
			return fin;
		}
		friend ostream& operator << (ostream &fout,SinhVien a)
		{
			if(a.date[1]=='/') a.date.insert(0,1,'0');
			if(a.date[4]=='/') a.date.insert(3,1,'0');
			cout<<"B20DCCN001 "<<a.name<<" "<<a.Class<<" "<<a.date<<" "<<fixed<<setprecision(2)<<a.gpa;
			return fout;
		}
};

int main(){
	faster
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}