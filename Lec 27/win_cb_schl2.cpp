#include<iostream>
using namespace std;
int main() {
	long long int n, m, x, y;
	cin>>n>>m>>x>>y;

	long long int s = 0, e = n, mid, ans;
	while(s <= e){
		mid = s + (e-s)/2;
		if(mid * x <= ((n - mid)*y) + m){
			ans = mid;
			s = mid + 1;
		}
		else{
			e = mid - 1;
		}
	}
	cout<<ans;
	
	return 0;
}