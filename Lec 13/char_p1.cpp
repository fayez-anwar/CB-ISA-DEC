#include <iostream>

using namespace std;

int main(void){
	//pointer type-casting
	// (void *) (int *) (char *) (double *)

	// void *ptr = NULL;

	// int x = 65;

	// int *xptr = &x;

	// cout<<(*xptr)<<endl;
	// cout<<(*(char *)xptr)<<endl;

	// ptr = &x;//this would give no error

	// cout<<ptr<<endl;

	// // cout<<(*ptr);//won't work
	// //'void*' is not a pointer-to-object type

	// cout<<(*(char *)ptr);

	char ch = 'q';

	cout<<ch<<endl;

	// cout<<&ch<<endl;//not-working

	char *cptr = &ch;

	// cout<<cptr<<endl;//not working

	cout<<(void *)cptr<<endl;
	cout<<(int *)cptr<<endl;
	cout<<(double *)cptr<<endl;
	cout<<(float *)cptr<<endl;
	cout<<(bool *)cptr<<endl;



	return 0;
}