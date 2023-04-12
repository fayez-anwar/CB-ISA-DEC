#include <iostream>
using namespace std;

class Base{
private:
	int d;
protected:
	int prt;
public:
	int b1;
	int b2;
	void printBase(){
		cout<<"Base\n";
	}
};

class Child : private Base{
	//////
public:
	int c1;
	void printChild(){
		cout<<"Child\n";
	}
};


int main(void){
	Base b;
	b.b1 = 5;
	b.b2 = 8;
	b.printBase();
	cout<<b.b1<<endl;
	cout<<b.b2<<endl;
	//protected behaves as private in the class where it is defined
	// b.prt = 15;
	// cout<<b.prt<<endl;

	Child c;
	c.c1 = 10;
	c.printChild();
	cout<<c.c1<<endl;
	c.b1 = 2;
	c.b2 = -1;
	c.printBase();
	cout<<c.b1<<endl;
	cout<<c.b2<<endl;
	//protected members are inherited
	//but the behave as private members when interacted from outside class
	c.prt = 15;
	cout<<c.prt<<endl;

	return 0;
}