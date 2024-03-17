#include<bits/stdc++.h>
#define endl "\n";
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
using db=double;
const int MOD=1e9+7;

class SinhVien{
	private:	
		string name,Class,date;
		double gpa;	
		string masv;
		static int dem;
	public:
		friend istream& operator >> (istream &fin,SinhVien &a)
		{
			dem++;
			string tmp="";
			a.masv="B20DCCN"+tmp.insert(0,3-to_string(dem).length(),'0')+to_string(dem);
			cin.ignore();
			getline(fin,a.name);
			fin>>a.Class>>a.date>>a.gpa;
			return fin;
		}
		friend ostream& operator << (ostream &fout,SinhVien a)
		{
			if(a.date[1]=='/') a.date.insert(0,1,'0');
			if(a.date[4]=='/') a.date.insert(3,1,'0');
			cout<<a.masv<<" "<<a.name<<" "<<a.Class<<" "<<a.date<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
			return fout;
		}	
																																																																																																																							  
};
int SinhVien::dem=0;

int main(){
	faster
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}