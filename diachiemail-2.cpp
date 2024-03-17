#include<bits/stdc++.h>
#define endl "\n";
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
using db=double;
const int MOD=1e9+7;

int main(){
	faster
	freopen("DATA.txt","r",stdin);
    int n;
    cin>>n;
    vector<string> kq;
    cin.ignore();
    while(n--)
    {
		string s,tmp,res="";
		getline(cin,s);
		stringstream ss(s);
		vector<string> v;
		while(ss>>tmp)
		{
			for(int i=0;i<tmp.size();i++)
				tmp[i]=tolower(tmp[i]);
			v.push_back(tmp);	
	   	}   	
	   	res+=v[v.size()-1];
		for(int i=0;i<v.size()-1;i++)
				res+=v[i][0];	
		kq.push_back(res);
	}
	for(int i=0;i<kq.size()-1;i++)
	{
		char num='2';
		for(int j=i+1;j<kq.size();j++)
			if(kq[i]==kq[j])
			{
				kq[j].insert(kq[j].end(),num);
				num++;
			}
	}
	for(auto x:kq)
		cout<<x<<"@ptit.edu.vn\n";	
	
		
    return 0;
}