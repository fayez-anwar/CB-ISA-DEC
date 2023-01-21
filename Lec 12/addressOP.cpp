#include <iostream>

using namespace std;

int main(void){
	int a = 5;

	cout<<"Value: "<<a<<endl;//value at a

	//adress of the variable a
	cout<<"Address: "<<&a<<endl;

	bool flag;

	cout<<"Value: "<<flag<<endl;

	cout<<"Address: "<<&flag<<endl;

	// char c = 'x';
	// cout<<"Value: "<<c<<endl;
	// cout<<"Address: "<<(void *)&c<<endl;

	float f = 9.1876;
	cout<<"Value: "<<f<<endl;
	cout<<"Address: "<<&f<<endl;

	return 0;
}