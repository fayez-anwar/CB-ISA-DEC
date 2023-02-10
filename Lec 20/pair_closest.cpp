#include <iostream>
#include <climits>
using namespace std;

int main(void){
	int n; cin>>n;
	int a[n];
	for(int i = 0; i < n; ++i){
		cin>>a[i];
	}
	int x;
	cin>>x;

	int i = 0, j = n - 1, p, q, closest_sum = INT_MAX;
	while(i < j){
		int sum = a[i] + a[j];
		if(abs(sum - x) < abs(closest_sum - x)){
			p = a[i];
			q = a[j];
			closest_sum = sum;
		}
		
		if(sum > x){
			j--;
		}
		else{//sum < x
			i++;
		}
	}
	cout<<p<<' '<<q<<endl;
	cout<<closest_sum;

	return 0;
}