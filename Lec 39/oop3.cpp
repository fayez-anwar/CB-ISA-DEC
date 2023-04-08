#include <iostream>
using namespace std;

class Car{
	private:
		float price;
	public:
		//data members
		string name;
		int mileage;
		string color;
		
		//member functions
		//methods
		void print(){
			cout<<"Name: "<<name<<endl;
			cout<<"Price: $"<<price<<endl;
			cout<<"Mileage: "<<mileage<<endl;
			
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

		//getter
		float get_price(){
			return price;
		}

		//setter
		void set_price(float pr){
			if(pr < price)
				return;
			price = pr;
		}
};

int main(void){
	Car c1;
	c1.name = "SUV";
	// c1.price = 5000.15;
	c1.mileage = 15;
	c1.color = "red";

	// cout<<c1.price<<endl;

	c1.set_price(5000);

	cout<<c1.get_price()<<endl;

	c1.set_price(3700);

	cout<<c1.get_price()<<endl;

	c1.set_price(8300);

	cout<<c1.get_price()<<endl;


	Car c2;
	c2.name = "MPV";
	// c2.price = 3500.75;
	c2.mileage = 25;
	c2.color = "white";

	return 0;
}