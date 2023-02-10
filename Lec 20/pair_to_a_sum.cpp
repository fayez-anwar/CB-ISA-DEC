#include <iostream>

using namespace std;

int main(void){
	int n; cin>>n;
	int a[n];
	for(int i = 0; i < n; ++i){
		cin>>a[i];
	}
	int x;
	cin>>x;

	int i = 0, j = n - 1;
	while(i < j){
		int sum = a[i] + a[j];
		if(sum == x){
			cout<<a[i]<<' '<<a[j];
			return 0;
		}
		else if(sum > x){
			j--;
		}
		else{//sum < x
			i++;
		}
	}
	cout<<"Not found";

	return 0;
}