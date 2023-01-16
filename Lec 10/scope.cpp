#include <iostream>
using namespace std;

int N = 100;
//global scope


void func1(int x, float b, char c,){
	int a = 1;
	cout<<a<<endl;
}

void func2(){
	int a = 2;
	cout<<a<<endl;
}

int main(){
	int a = 5;
	cout<<a<<endl;

	func1();

	func2();

	if(a > 3){
		int a = 15;
		cout<<a<<endl;
	}
}

