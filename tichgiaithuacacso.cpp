#include<bits/stdc++.h>
#define endl "\n";
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
using db=double;
const int MOD=1e9+7;

string giaithua(char a)
{
	if(a=='1'||a=='0')	return "1";
	else if(a=='2')	return "2";
	else if(a=='3')	return "3";
	else if(a=='4')	return "322";
	else if(a=='5')	return "5";
	else if(a=='6')	return "53";
	else if(a=='7')	return "7";
	else if(a=='8')	return "7222";
	else if(a=='9') return "7332";
	return "0";
}

int main(){
	faster
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		string a;
	    cin>>n>>a;
	    string res="";
	    for(int i=0;i<a.size();i++)
	    	res+=giaithua(a[i]);
	    sort(res.begin(),res.end(),greater<char>());
	    while(res[res.size()-1]=='1')
	    	res.erase(res.size()-1);
		cout<<res<<endl;	
	}
    return 0;
}