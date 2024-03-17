#include<bits/stdc++.h>
#define endl "\n";
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
using db=double;
const int MOD=1e9+7;

class SinhVien{
	private:
		string masv,name,Class,email;
	public:
		friend istream& operator >> (istream &fin,SinhVien &a)
		{
			fin>>a.masv;
			fin.ignore();
			getline(fin,a.name);
			fin>>a.Class>>a.email;
			return fin;
		}	
		string getClass()
		{
			string res="";
			res=res+this->Class[1]+this->Class[2];
			return res;
		}
		friend ostream& operator << (ostream &fout,SinhVien a)
		{
			fout<<a.masv<<" "<<a.name<<" "<<a.Class<<" "<<a.email<<endl;
			return fout;
		}
};

int main(){
	faster
//	freopen("DATA.txt","r", stdin);
	int n;
	cin>>n;
	SinhVien a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int q;
	cin>>q;
	while(q--)
	{
		string nam;
		cin>>nam;
		string res="";
		res=res+nam[2]+nam[3];
//		cout<<res<<endl;
		cout<<"DANH SACH SINH VIEN KHOA "<<nam<<":\n";
		for(int i=0;i<n;i++)
		{
			if(res==a[i].getClass())
				cout<<a[i];
		}
	}
    return 0;
}