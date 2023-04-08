#include <iostream>
using namespace std;

class NewInt{
public:
	int val;

	int checkSign(){
		if(val < 0) return -1;
		if(val == 0) return 0;
		if(val > 0) return 1;
	}

	void absolute(){
		val = abs(val);
	}

	void doubleIt(){
		val *= 2;
	}
};

int main(void){
	NewInt num;
	num.val = 10;

	cout<<num.checkSign()<<endl;

	num.val = -5;

	cout<<num.checkSign()<<endl;

	num.doubleIt();

	cout<<num.val<<endl;

	num.absolute();

	cout<<num.val<<endl;

	return 0;
}