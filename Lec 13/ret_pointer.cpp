#include <iostream>
using namespace std;


void* fun(){
	int A = 10;
	cout<<&A;
	return &A;
}

int main(void){

	// cout<<&A<<endl;

	void *ptr = NULL;

	ptr = fun();

	cout<<ptr;


	

	return 0;
}