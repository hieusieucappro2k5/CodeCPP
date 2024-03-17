#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
bool ok (string a, string b) {
	string s1 = a + b;
	string s2 = b + a;
	return s1 < s2;
}

int main() {
	faster
	int t;
	cin>>t;
	while(t--) 
	{
		int n;
		cin>>n;
		vector<string> v(n);
		for(auto &x:v) cin>>x;
		sort(v.begin(),v.end(),ok);
		for(int i=n-1;i>=0;i--) cout<<v[i];
		cout<<endl;
	}
}