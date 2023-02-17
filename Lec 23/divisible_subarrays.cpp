#include <iostream>
#include <vector>
using namespace std;

int main(void){
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i){
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i){
			cin>>arr[i];
		}

		long long int csum[n];
		csum[0] = arr[0];

		for (int i = 1; i < n; ++i){
			csum[i] = csum[i-1] + arr[i];
		}

		// int sum;
		long long int count = 0;
		vector<int> freq(n, 0);
		
		freq[0] = 1;
		
		for(int i = 0; i < n; i++){
			int rem = ((csum[i]%n)+n)%n;
			freq[rem]++;
		}

		for (int i = 0; i < n; ++i){
			count += ((long long int)freq[i]*(freq[i]-1))/2;
		}
		cout<<count<<endl;

	}
	return 0;
}