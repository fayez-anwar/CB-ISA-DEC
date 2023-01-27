#include <iostream>

using namespace std;

int main(void){
	int n;
	cin>>n;

	int i = 1;
	while((i+1)*(i+1) <= n){
		//if (i+1)^2 is less than n
		//increment i
		i++;
	}
	//i is sqrt(n)
	cout<<i;

	return 0;
}