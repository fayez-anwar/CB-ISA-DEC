#include <iostream>
#include <list>
using namespace std;


int main(void){
	
	list<int> l({1, 2, 3, 4});//doubly linked_list

	for(auto i : l){
		cout<<i<<' ';
	}

	cout<<endl;

	for(list<int>::iterator it = l.begin(); it != l.end(); it++){
		cout<<(*it)<<' ';
	}

	cout<<endl;

	// l.end();//method which returns iterator next to the last element

	cout<<l.front()<<endl;
	cout<<l.back()<<endl;
	//is a function/method which returns the last element

	l.push_back(9);//O(1)

	for(auto i : l){
		cout<<i<<' ';
	}

	cout<<endl;

	l.push_front(5);//O(1)

	for(auto i : l){
		cout<<i<<' ';
	}

	cout<<endl;

	l.pop_back();

	l.pop_front();

	for(int i : l){
		cout<<i<<' ';
	}

	cout<<endl;

	list<int>::iterator it = l.end();
	it--;

	l.insert(it, 7);//if i provide the iterator--then insert is O(1)

	for(int i : l){
		cout<<i<<' ';
	}

	cout<<endl;

	l.insert(it, 3, 8);//insert value--7, 3 times at it

	for(auto i : l){
		cout<<i<<' ';
	}

	cout<<endl;

	// l.assign(5, 4);//re-assigns the entire list with value--4, 5x times

	// for(auto i : l){
	// 	cout<<i<<' ';
	// }
	// cout<<endl;

	cout<<l.size()<<endl;

	l.reverse();

	for(auto i : l){
		cout<<i<<' ';
	}
	cout<<endl;

	// l.sort();

	// for(auto i : l){
	// 	cout<<i<<' ';
	// }
	// cout<<endl;

	l.unique();

	for(auto i : l){
		cout<<i<<' ';
	}
	cout<<endl;

	return 0;
}