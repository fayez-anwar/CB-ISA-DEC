#include <iostream>
using namespace std;

class Car{
	public:
		//data members
		string name;
		float price;
		int mileage;
		string color;
		char features[20];

		//member functions
		//methods
		void print(){
			cout<<"Name: "<<name<<endl;
			cout<<"Price: $"<<price<<endl;
			cout<<"Mileage: "<<mileage<<endl;
			cout<<"features: "<<features<<endl;
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
};

int main(void){
	Car c1;
	c1.name = "SUV";
	c1.price = 5000.15;
	c1.mileage = 15;
	c1.color = "red";
	//features --diesel
	c1.features[0] = 'd';
	c1.features[1] = 'i';
	c1.features[2] = 'e';
	c1.features[3] = 's';
	c1.features[4] = 'e';
	c1.features[5] = 'l';
	c1.features[6] = '\0';


	// cout<<"Name: "<<c1.name<<endl;
	cout<<"Price: $"<<c1.price<<endl;
	// cout<<"Mileage: "<<c1.mileage<<endl;
	// cout<<"features: "<<c1.features<<endl;
	// c1.print();

	cout<<"Discounted Price: $"<<c1.discountedPrice()<<endl;

	cout<<c1.guessColor("white")<<endl;
	cout<<c1.guessColor("red")<<endl;
	cout<<c1.guessColor("black")<<endl;


	// cout<<sizeof(c1)<<endl;

	Car c2;
	c2.name = "MPV";
	c2.price = 3500.75;
	c2.mileage = 25;
	c2.color = "white";

	cout<<c2.guessColor("white")<<endl;
	cout<<c2.guessColor("red")<<endl;
	cout<<c2.guessColor("black")<<endl;

	// cout<<"Name: "<<c2.name<<endl;
	// cout<<"Price: $"<<c2.price<<endl;
	// cout<<"Mileage: "<<c2.mileage<<endl;
	// c2.print();
	

	// Car carr[10];
	// carr[0].name = 
	// carr[0].price =

	return 0;
}