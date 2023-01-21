#include <iostream>
using namespace std;

int main(void){
	
	int x = 10;

	int *y = &x;

	cout<<"Add x: "<<&x<<endl;
	cout<<"Add y: "<<&y<<endl;

	// cout<<"1. "<<x<<endl;//10
	// cout<<"2. "<<&x<<endl;//100
	// cout<<"3. "<<y<<endl;//100
	// cout<<"4. "<<&y<<endl;//200
	
	cout<<"5. "<<*(&x)<<endl;//10
	cout<<"6. "<<&(*y)<<endl;//100

	// cout<<"7. "<<(x + 1)<<endl;//11
	// cout<<"8. "<<(&x) + 1<<endl;//101
	// cout<<"9. "<<y + 1<<endl;//101
	// cout<<"10. "<<(*y) + 1<<endl;//11

	cout<<"11. "<<*(&y)<<endl;//100

	return 0;
}