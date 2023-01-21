#include <iostream>
using namespace std;

int main(void){
	
	int a = 5;

	cout<<"Value: "<<a<<endl;
	cout<<"Address: "<<&a<<endl;

	int *aptr = &a;

	cout<<"Address: "<<aptr<<endl;

	cout<<"Address of pointer: "<<&aptr<<endl;

	//dereference..
	cout<<"Value at the adddress stored in this pointer: ";
	cout<<*aptr<<endl;
	


	return 0;
}