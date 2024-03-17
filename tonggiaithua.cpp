#include<iostream>

using namespace std;

int sum1(int n) {
	int sum=0;
	for(int i=1; i<=n; i++) 
	{
		int result=1;
		for(int j=1; j<=i; j++) result*=j;
		sum+=result;
	}
	return sum;
}
int main() {
	int n;
	cin>>n;
	cout<<sum1(n)<<endl;
}