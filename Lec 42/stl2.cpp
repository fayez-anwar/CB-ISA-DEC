#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(void){
	// int n;
	// cin>>n;
	// int arr[n];
	// for(int i = 0; i < n; i++){
	// 	cin>>arr[i];
	// }

	//lower bound for a val in the sorted array is the
	//index of first value which is not less than val in the array

	//upper bound for a val in the sorted array is the 
	//index of first value which has a greater value than val in array

	
	// lower bound of 4 = 6
	// upper bound of 4 = 8
	// auto x;
	// x = "fwjjk";


	// auto l = lower_bound(arr, arr+n, 4);
	// cout<<(l - arr)<<endl;

	// auto u = upper_bound(arr, arr+n, 4);
	// cout<<(u - arr)<<endl;	

	int m;
	cin>>m;
	vector<int> v(m);
	for (int i = 0; i < m; ++i){
		cin>>v[i];
	}

	auto l = lower_bound(v.begin(), v.end(), 4);
	cout<<(l - v.begin())<<endl;

	auto u = upper_bound(v.begin(), v.end(), 8);
	cout<<(u - v.begin())<<endl;
	if(u == v.end()){
		cout<<"next to last iterator\n";
	}

	if(binary_search(v.begin(), v.end(), 7)){
		cout<<"found";
	}
	else{
		cout<<"not found";
	}

}


