#include<iostream>
using namespace std;
int main() {
	long long int n, m, x, y;
	cin>>n>>m>>x>>y;

	for(long long int g = n; g >= 0; g--){

		if(g*x <= m + ((n-g)*y)){
			cout<<g;
			return 0;
		}

	}
	return 0;
}