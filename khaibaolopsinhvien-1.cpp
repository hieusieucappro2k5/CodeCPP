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
		void nhap()
		{
			getline(cin,this->name);
			cin>>this->Class>>this->date>>this->gpa;
		}
		void xuat()
		{
			if(this->date[1]=='/') this->date.insert(0,1,'0');
			if(this->date[4]=='/') this->date.insert(3,1,'0');
			cout<<"B20DCCN001 "<<this->name<<" "<<this->Class<<" "<<this->date<<" "<<fixed<<setprecision(2)<<this->gpa;
		}
};

int main(){
	faster
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}