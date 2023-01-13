#include <iostream>
using namespace std;

int main(void){

	// Q. Print first 100 values of the Fibonacci Series
	// 0 1 1 2 3 5 8 13 21 34 55 89......infinite series
	int first_value = 0, second_value = 1;
	cout<<first_value<<' ';
	cout<<second_value<<' ';

	for(int i = 2; i < 20; i++){
		//calculating current term
		int curr_value = first_value + second_value;
		cout<<curr_value<<' ';

		//updating the last two terms
		first_value = second_value;
		second_value = curr_value;
	}

	return 0;
}

// Sorting

// Bubble Sort
// Selection Sort
// Insertion Sort



