#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin>>a>>b;

	// int temp = a;
	// a = b;
	// b = temp;

	a = a + b;
	b = a - b;
	a = a - b;

	cout<<a<<' '<<b<<endl;
	cout<<(&a)<<endl;
	int x[3];
	int *p = &x[0];
	cout<<p<<endl;
	p = &x[1];
	cout<<p<<endl;
	p = &x[2];
	cout<<p<<endl;
	

	return 0;
}


