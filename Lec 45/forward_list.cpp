#include <iostream>
#include <forward_list>

using namespace std;

int main(void){

	forward_list<int> fl({2, 3, 5, 6, 8});

	// for(int i : fl){
	// 	cout<<i<<' ';
	// }

	// cout<<endl;

	for(forward_list<int>::iterator it = fl.begin(); it != fl.end(); it++){
		cout<<(*it)<<' ';
	}

	cout<<endl;

	// fl.assign(3, 6);
	forward_list<int> fl2({3, 6, 1, 2, 4});

	// for(auto i : fl2){
	// 	cout<<i<<' ';
	// }

	// cout<<endl;

	forward_list<int>::iterator it_start = fl2.begin();
	it_start++;

	auto it_end = it_start;
	it_end++;
	it_end++;
	it_end++;

	// auto it_end = fl2.end();
	// it_end--;
	//not possible in a single linked list or forward list

	// fl.assign(it_start, it_end);

	// for(auto i : fl2){
	// 	cout<<i<<' ';
	// }

	// cout<<endl;

	fl.push_front(9);

	// fl.push_back(7);no pushback in forward_list

	for(auto i : fl){
		cout<<i<<' ';
	}

	cout<<endl;

	fl.pop_front();
	
	for(auto i : fl){
		cout<<i<<' ';
	}

	cout<<endl;

	forward_list<int>::iterator it = fl.begin();
	it++, it++;

	fl.insert_after(it, 1);//inserting 1 after 3 elment
	
	for(auto i : fl){
		cout<<i<<' ';
	}

	cout<<endl;

	fl.erase_after(it);
	// fl.erase_after(it, fl.end());

	for(auto i : fl){
		cout<<i<<' ';
	}

	cout<<endl;

	// fl.insert_after(it, 2, 4);
	fl.insert_after(it, {3,4,6,7,8,9});

	for(auto i : fl){
		cout<<i<<' ';
	}

	cout<<endl;

	fl.remove(9);//complexity??--O(n)

	for(auto i : fl){
		cout<<i<<' ';
	}

	cout<<endl;

	fl.sort();

	for(auto i : fl){
		cout<<i<<' ';
	}

	cout<<endl;


	fl.unique();

	for(auto i : fl){
		cout<<i<<' ';
	}
	cout<<endl;

	fl.reverse();

	for(auto i : fl){
		cout<<i<<' ';
	}
	cout<<endl;


}