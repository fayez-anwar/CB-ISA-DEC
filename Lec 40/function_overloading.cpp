#include <iostream>
using namespace std;

int sum (int a){
	cout<<"fun1\n";
	return a;
}

int sum (int a, int b){
	cout<<"fun2\n";
	return a + b;
}

//not allowed because same parameter type
// double sum (int a, int b){
// 	return (double) a + b;
// }

int sum (int a, int b, int c){
	cout<<"fun3\n";
	return a + b + c;
	// return a + sum(b, c);
}

double sum (double a, double b){
	cout<<"fun4\n";
	return a + b;
}

int sum (int a, int b, double c){
	cout<<"fun5\n";
	return a + b + c; 
}

int main(void){ 
	cout<<sum(1)<<'\n';
	cout<<sum(2, 3)<<'\n';
	cout<<sum(3, 7, 1)<<'\n';
	cout<<sum(1.54, 2.31)<<'\n';
	cout<<sum(5, 1, 9.8)<<'\n';
	return 0;
}