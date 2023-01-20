#include <iostream>

using namespace std;

int main(void){
	int a, b, c, d, e;
	cin>>a>>b>>c>>d>>e;

	//factorial for a
	int f1 = 1;
	for(int i = 1; i <= a; i++){
		f1 = f1 * i;
	}
	//f1 stores a! 1 * 1 * 2 * 3 * 4 * 5

	//factorial for b
	int f2 = 1;
	for(int i = 1; i <= b; i++){
		f2 = f2 * i;
	}

	//factorial for c
	int f3 = 1;
	for(int i = 1; i <= c; i++){
		f3 = f3 * i;
	}

	//factorial for d
	int f4 = 1;
	for(int i = 1; i <= d; i++){
		f4 = f4 * i;
	}

	//factorial for e
	int f5 = 1;
	for(int i = 1; i <= e; i++){
		f5 = f5 * i;
	}

	cout<<a<<"! = "<<f1<<endl;
	cout<<b<<"! = "<<f2<<endl;
	cout<<c<<"! = "<<f3<<endl;
	cout<<d<<"! = "<<f4<<endl;
	cout<<e<<"! = "<<f5<<endl;
	

	return 0;
}