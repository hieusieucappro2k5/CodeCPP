#include<bits/stdc++.h>

using namespace std;

bool prime(int n)
{
	if(n<2) return 0;
	if(n==2||n==3) return 1;
	if(n%2==0||n%3==0) return 0;
	for(int i=5;i*i<=n;i+=6)
		if(n%i==0||n%(i+2)==0) return 0;
	return 1;	
}

vector<int> findPrimesBetween(int a, int b) {
    vector<int> primes;
    for (int num = a; num <= b; ++num) {
        if (prime(num))
            primes.push_back(num);
    }
    return primes;
}


int main()
{
	int a,b;
	cin>>a>>b;
	if(a>b) swap(a,b);
	vector<int> result=findPrimesBetween(a,b);
	for(auto x:result) 
		cout<<x<<" ";
}