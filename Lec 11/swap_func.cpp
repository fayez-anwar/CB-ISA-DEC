#include <iostream>

using namespace std;

void swap(int a, int b){
	int temp = a;
	a = b;
	b = temp;
	cout<<a<<' '<<b<<"Inside func"<<endl;
	return;
}

int main(){
	int a, b;
	cin>>a>>b;

	cout<<a<<' '<<b<<endl;
	swap(a, b);
	cout<<a<<' '<<b<<endl;

	return 0;
}


