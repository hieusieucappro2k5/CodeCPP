#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--) {
		int n,k;
		cin>>n>>k;
		vector<int> a(n);
		for(auto &x:a) cin>>x;
		sort(a.begin(),a.end());
		long long cnt=0;
		for(int i=0; i<n-1; i++) {
			auto it=lower_bound(a.begin()+i+1,a.end(),k+a[i])-(a.begin()+i+1);
			cnt=cnt+it;
		}
		cout<<cnt<<endl;
	}
	return 0;
}