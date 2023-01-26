#include <iostream>

using namespace std;

int main(void){
	
	int x = 6;

	int &alias = x;

	cout<<alias<<endl;

	x = 10;

	cout<<alias;

	int a = 5;

	int b = a;

	cout<<b<<endl;

	a = 10;

	cout<<b<<endl;



	return 0;
}