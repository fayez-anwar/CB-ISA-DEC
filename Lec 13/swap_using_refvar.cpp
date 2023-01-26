#include <iostream>
using namespace std;

void swap(int &ar, int &br){
	int temp = ar;
	ar = br;
	br = temp;
}

int main(void){
	int a = 5, b = 3;

	cout<<a<<' '<<b<<endl;

	swap(a, b);

	cout<<a<<' '<<b<<endl;

	return 0;
}