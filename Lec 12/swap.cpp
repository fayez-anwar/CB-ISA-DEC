#include <iostream>
using namespace std;

void swap(int *aptr, int *bptr){
	int temp = *aptr;
	*aptr = *bptr;
	*bptr = temp;
}

int main(void){
	int a, b;
	cin>>a>>b;

	cout<<a<<' '<<b<<endl;
	swap(&a, &b);//passing address instead of values
	cout<<a<<' '<<b<<endl;

	return 0;
}