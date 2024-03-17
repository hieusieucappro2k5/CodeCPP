#include<bits/stdc++.h>
#define endl "\n";
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
using db=double;
const int MOD=1e9+7;

string chuanhoa(string s)
{
	string res="",tmp;
	stringstream ss(s);
	while(ss>>tmp)
	{
		res+=toupper(tmp[0]);
		for(int i=1;i<tmp.size();i++)
			res+=tolower(tmp[i]);
		res+=' ';	
	}
	return res;
}

class SinhVien{
	private:
		string name,Class,date;
		double gpa;
	public:
		friend istream& operator >> (istream &fin,SinhVien &a)
		{
			getline(fin,a.name);
			fin>>a.Class>>a.date>>a.gpa;
			
			a.name=chuanhoa(a.name);
			return fin;			
		}	
		friend ostream& operator << (ostream &fout,SinhVien a)
		{	
			if(a.date[1]=='/') a.date.insert(a.date.begin(),'0');
			if(a.date[4]=='/') a.date.insert(a.date.begin()+3,'0');
			cout<<"B20DCCN001"<<" "<<a.name<<a.Class<<" "<<a.date<<" "<<fixed<<setprecision(2)<<a.gpa;
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