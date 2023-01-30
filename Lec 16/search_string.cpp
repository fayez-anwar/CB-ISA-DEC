#include <iostream>

using namespace std;

bool isSame(string a, string b){
	if(a.length() != b.length()){
		return false;//different length
	}
	//same length
	for (int i = 0; i < a.length(); ++i){
		if(a[i] != b[i]){
			//at index i, they have diff char
			//not same string
			return false;
		}
	}
	return true;
}

bool find(string arr[], int n, string s){
	for (int i = 0; i < n; ++i){
		//compare s and arr[i]
		// if(isSame(s, arr[i])){
		// 	return true;
		// }
		if(s == arr[i]){
			return true;
		}
	}
	return false;
}

int main(void){
	
	// Given a list(array) of N words/strings, 
	// and a string S, find whether S is present
	// in the list or not.

	int n;
	cin>>n;
	string arr[n];
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}

	string s;
	cin>>s;
	
	cout<<find(arr, n, s);

	return 0;
}