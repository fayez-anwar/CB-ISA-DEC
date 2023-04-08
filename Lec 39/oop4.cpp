#include <iostream>
using namespace std;

class Car{
	/*
	1.Constructor --when an object is created
	2.Destructor --when an object is destroyed
	*/

	public:
		//data members
		string name;
		float price;
		int mileage;
		string color;
		char *engineType;

		//member functions
		//methods
		void print(){
			cout<<"Name: "<<name<<endl;
			cout<<"Price: $"<<price<<endl;
			cout<<"Mileage: "<<mileage<<endl;
			cout<<"Color: "<<color<<endl;
			cout<<engineType<<endl;
			cout<<endl;
		}

		float discountedPrice(){
			//discount of 10%
			return 0.9*price;
		}

		bool guessColor(string c){
			if(c == color)
				return true;
			else
				return false;
		}

		//constructor has same name as the class
		//has no return type
		Car(string str, float pr, int mil, string clr, char *eng){
			//Parameterized Constructor
			// cout<<"Inside my constructor1"<<endl;
			name = str;
			price = pr;
			mileage = mil;
			color = clr;
			engineType = eng;
		}

		Car(){
			//Default Constructor
			// cout<<"Inside Default Constructor"<<endl;
		}

		Car(string str, float pr){
			//Parameterized Constructor
			// cout<<"Inside my constructor2"<<endl;
			name = str;
			price = pr;
		}

		// Car(Car &c){
		// 	// cout<<"Inside Copy Constructor"<<endl;
		// 	name = c.name;
		// 	price = c.price;
		// 	color = c.color;
		// 	mileage = c.mileage;
		// 	engineType = c.engineType;
		// }
		/*
		The copy constructor available by deafult does
		shallow copy --bit-by-bit copy
		Another type of copy is deep copy
		*/

		~Car(){//tilde
			// cout<<"Inside my destructor: "<<name<<endl;
		}
};

int main(void){
	char c[] = "Diesel";
	Car c1("SUV", 5000.15, 15, "red", c);
	
	c1.print();

	Car c2(c1);
	c2.name = "XUV";
	c2.engineType[0] = 'P';

	c2.print();

	c1.print();

	c1.engineType[1] = 'o';

	c2.print();

	cout<<(void*)c1.engineType<<endl;
	cout<<(int*)c2.engineType<<endl;

	// int x;
	// int *xptr = &x;

	// cout<<xptr<<endl;
	// cout<<&x<<endl;


	return 0;
}