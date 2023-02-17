#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	long long int n, MOD = 998244353;
	cin>>n;
	long long int a[n], b[n];
	for (int i = 0; i < n; ++i){
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i){
		cin>>b[i];
	}

	for (int i = 0; i < n; ++i){
		a[i] *= (i+1)*(n-i);
	}

	sort(a, a+n);
	sort(b, b+n);
	for (int i = 0; i < n/2; ++i){
		swap(b[i], b[n-1-i]);
	}
	// sort(b, b+n, greater<int>());
	
	long long int sum = 0;
	for (int i = 0; i < n; ++i){
		sum = (sum + ((a[i]%MOD)*b[i])%MOD)%MOD;
	}

	cout<<sum;

	return 0;
}