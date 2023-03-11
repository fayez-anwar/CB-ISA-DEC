#include <iostream>
using namespace std;

int main(void){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}

	int position[n+1];
	for (int i = 0; i < n; ++i){
		position[arr[i]] = i;
	}

	// bool output[n+1] = {0};
	string s;

	int l = position[1], r = position[1];
	// output[1] = 1;
	// output[n] = 1;
	s.push_back('1');//subarray of len 1

	for (int i = 2; i < n; ++i){
		if(position[i] < l){
			l = position[i];
		}
		else if(position[i] > r){
			r = position[i];
		}

		if(r - l + 1 == i){
			// output[i] = 1;	
			s.push_back('1');
		}
		else{
			s.push_back('0');
		}
	}

	s.push_back('1');//subarray of len n

	// for (int i = 1; i <= n; ++i){
	// 	cout<<output[i];
	// }
	cout<<s;
	return 0;
}