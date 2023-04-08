#include <iostream>
using namespace std;

class MyVector{
	int currSize;//no of elements
	int totalSize;//size of arr
	int *arr;
public:
	MyVector(){
		currSize = 0;
		totalSize = 1;
		arr = new int[totalSize];
		arr[0] = 0;
	}

	MyVector(int n){
		currSize = n;
		totalSize = n;
		arr = new int[2*n];
		for (int i = 0; i < 2*n; ++i) arr[i] = 0;//init
	}
	
	void pushBack(int val){
		if(currSize == totalSize){
			//additional memory needed
			int *oldChunk = arr;
			arr = new int[2*totalSize];
			totalSize *= 2;
			for(int i = 0; i < currSize; i++)
				arr[i] = oldChunk[i];
			delete[] oldChunk;
		}
		arr[currSize++] = val;
	}

	void popBack(){
		if(currSize == 0) {
			cout<<"Can't popBack";
			return;
		}
		currSize--;
	}

	int front(){//first element
		return arr[0];
	}

	int back(){//last element
		return arr[currSize-1];
	}

	int size(){
		return currSize;
	}

	int capacity(){
		return totalSize;
	}

	int atIndex(int i){
		if(i < 0 or i >= currSize){
			return -1;
		}
		return arr[i];
	}

	void setIndex(int i, int val){
		arr[i] = val;
	}

	int operator[](int i){
		return arr[i];
	}

	// int operator()(int i){
	// 	return arr[i];
	// }

	void operator+(MyVector& mv){
		if(currSize + mv.size() >= totalSize){
			//memory needed
			int new_size = (currSize + mv.size())*2;
			int *oldChunk = arr;
			arr = new int[new_size];
			totalSize = new_size;
			for (int i = 0; i < currSize; ++i)
				arr[i] = oldChunk[i];
			for(int i = 0; i < mv.size(); i++)
				arr[i+currSize] = mv[i];
			currSize = currSize + mv.size();
			delete[] oldChunk;
			return;
		}
		for(int i = 0; i < mv.size(); i++)
			arr[i+currSize] = mv[i];
		currSize += mv.size();
	}

};


int main(void){
	MyVector mv1(10);
	MyVector mv2(5);

	// mv1.pushBack(3);
	// mv2.popBack();

	// mv1.currSize;??
	// currSize is kept private to avoid illegal interference

	// cout<<mv1.size();

	// cout<<mv1.atIndex(3);

	// cout<<mv1[2];

	// cout<<mv1(5);

	for (int i = 0; i < mv1.size(); ++i){
		mv1.setIndex(i, i);
	}

	for (int i = 0; i < mv2.size(); ++i){
		mv2.setIndex(i, i*2);
	}

	for (int i = 0; i < mv1.size(); ++i){
		cout<<mv1[i]<<' ';
	}
	cout<<endl;
	for (int i = 0; i < mv2.size(); ++i){
		cout<<mv2[i]<<' ';
	}
	cout<<endl;

	mv1 + mv2;//attaching mv2 into mv1

	for (int i = 0; i < mv1.size(); ++i){
		cout<<mv1[i]<<' ';
	}


	return 0;
}
