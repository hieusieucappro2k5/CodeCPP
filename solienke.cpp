#include<bits/stdc++.h>
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

bool number(string n) {
	int l=n.length();
	for(int i=0; i<l-1; i++) {
		if(n[i+1]-n[i]>=2||n[i+1]-n[i]<=-2) return 0;
		if(n[i+1]-n[i]==0) return 0;
	}
	return true;
}

int main() {
	faster();
	int t;
	cin>>t;
	while(t--) {
		string n;
		cin>>n;
		if(number(n)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}