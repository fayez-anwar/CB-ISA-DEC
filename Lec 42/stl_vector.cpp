#include <iostream>
#include <vector>
using namespace std;

int main(void){
	vector<int> v;
	vector<int> v3(10);
	vector<int> v4{1, 2, 3, 4, 5}


	// cout<<v.size()<<endl;

	//insert element using push_back()
	v.push_back(5);
	v.push_back(1);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	v.push_back(9);
	// v.insert(v.begin(), {2,3,4});

	// for (int i = 0; i < v.size(); ++i){
	// 	cout<<v[i]<<' ';
	// }
	// cout<<endl;
	// // cout<<v.max_size()<<endl;
	// cout<<v.size()<<endl;
	// cout<<v.capacity()<<endl<<endl;

	v.resize(4);

	// cout<<v.size()<<endl;
	// cout<<v.capacity()<<endl;

	for (int i = 0; i < v.size(); ++i){
		cout<<v[i]<<' ';
	}
	// cout<<endl<<endl;

	v.resize(6);

	v.resize(10, 3);

	// cout<<v.size()<<endl;
	// cout<<v.capacity()<<endl;

	// for (int i = 0; i < v.size(); ++i){
	// 	cout<<v[i]<<' ';
	// }
	// cout<<endl;

	// // v.empty();//true if no element present, else false
	// cout<<v.front()<<endl;
	// cout<<v.back()<<endl;

	v.pop_back();//removing last element

	v.insert(v.end(), 4);//insert 4 at end

	// cout<<v.back()<<endl;
	for (int i = 0; i < v.size(); ++i){
		cout<<v[i]<<' ';
	}
	cout<<endl;

	v.insert(v.begin(), 5, 7);//insert 7 , 5 times at end

	for (int i = 0; i < v.size(); ++i){
		cout<<v[i]<<' ';
	}
	cout<<endl;

	vector<int> v2;
	v2.push_back(3);
	v2.push_back(6);
	v2.push_back(9);

	v.insert(v.begin()+2, v2.begin(), v2.end());
	for (int i = 0; i < v.size(); ++i){
		cout<<v[i]<<' ';
	}
	cout<<endl;

	v.insert(v.begin()+5, {1, 2, 5, 7});
	for (int i = 0; i < v.size(); ++i){
		cout<<v[i]<<' ';
	}
	cout<<endl;

	// v.clear();

	// cout<<v.capacity()<<endl;
	// cout<<v.size()<<endl;
	v.erase(v.begin()+5, v.end());
	for (int i = 0; i < v.size(); ++i){
		cout<<v[i]<<' ';
	}
	cout<<endl;

	return 0;
}