#include <iostream>

using namespace std;

int main(void){
	
	int x = 7;

	int *xp = &x;
	cout<<"Address of x: "<<&x<<endl;
	cout<<"xp stores the address of x: "<<xp<<endl;

	int **xp_ptr = &xp;
	cout<<"Address of xp: "<<&xp<<endl;
	cout<<"xp_ptr stores the address of xp: "<<xp_ptr<<endl;

	cout<<"Address of xp_ptr: "<<&xp_ptr<<endl;

	cout<<"Deref xp_ptr: "<<(*xp_ptr)<<endl;
	cout<<"Double Deref xp_ptr: "<<**xp_ptr<<endl;

	return 0;
}