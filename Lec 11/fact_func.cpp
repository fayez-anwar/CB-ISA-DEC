#include <iostream>

using namespace std;

int factorial(int n){
	int f = 1;
	for (int i = 1; i <= n; ++i){
		f = f * i;//f *= i;
	}
	return f;
}

void printFact(int n){
	n++;//4
	cout<<n<<"! = "<<factorial(n)<<endl;
	return;
}

int main(){
	int a, b, c, d, e;
	cin>>a>>b>>c>>d>>e;

	printFact(a);
	cout<<a<<endl;
	// printFact(b);
	// printFact(c);
	// printFact(d);
	// printFact(e);

	return 0;
}


