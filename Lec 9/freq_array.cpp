#include <iostream>

using namespace std;

int main(void){
	int n;
	cin>>n;

	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	// int m, x;
	// cin>>m;


	// for(int i = 0; i < m; i++){
	// 	cin>>x;
	// 	int freq = 0;
	// 	for (int j = 0; j < n; j++){
	// 		if(arr[j] == x){
	// 			freq++;
	// 		}
	// 	}
	// 	cout<<"Frequency of "<<x<<" is "<<freq<<endl;
	// }

	int freq[101] = {0};

	for (int i = 0; i < n; ++i){
		freq[arr[i]]++;
	}

	int m;
	cin>>m;
	for(int i = 0; i < m; i++){
		int x;
		cin>>x;
		cout<<x<<" : "<<freq[x]<<endl;
	}

	return 0;
}