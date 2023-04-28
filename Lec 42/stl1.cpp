#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compar(int a, int b){
	//if i want to sort in ascending order
	//then smaller value should be first
	if(a < b){
		return true;
	}
	//else we need to swap them..
	return false;
}

bool compar2(int a, int b){
	//if i want to sort in descending order
	//then larger value should be first
	if(a >= b){
		return true;
	}
	//else we need to swap them..
	return false;
}

int main(void){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	sort(arr, arr+n, greater<int>());//
	//first argument starting pointer
	//second argument is pointer next to the last index

	for (int i = 0; i < n; ++i){
		cout<<arr[i]<<' ';
	}
	cout<<endl;

	// arr   arr+1   arr+2 ..... arr+n-1
	// 0     1     2    3  ...... n-1  n

	
	// int m;
	// cin>>m;
	// vector<int> v(m);
	// for (int i = 0; i < m; ++i){
	// 	cin>>v[i];
	// }

	// sort(v.begin()+1, v.end()-2);
	// // .begin()/.end() --> iterators
	// //data structures in STL, to iterate over them..iterators

	// for(int i = 0; i < m; i++){
	// 	cout<<v[i]<<' ';
	// }

}

// Take as input an array of strings, and sort them lexicographically
// using sort() from STL alongwith a comparator function



