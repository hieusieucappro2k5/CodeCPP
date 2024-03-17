#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n][n];	
	int result[n*n];
	for(int i=0;i<n*n;i++) cin>>result[i];
	sort(result,result+n*n);
	int h1=0,h2=n-1,c1=0,c2=n-1;
	int num=0;
	while(h1<=h2&&c1<=c2) {
		for(int i=c1; i<=c2; i++)
			a[h1][i]=result[num++];
		h1++;
		for(int i=h1; i<=h2; i++)
			a[i][c2]=result[num++];
		c2--;
		for(int i=c2; i>=c1; i--)
			a[h2][i]=result[num++];
		h2--;
		for(int i=h2; i>=h1; i--)
			a[i][c1]=result[num++];
		c1++;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++) cout<<a[i][j]<<" ";
		cout<<endl;
	}
}