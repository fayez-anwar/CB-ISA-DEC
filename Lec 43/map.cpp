#include<iostream>
#include <map>

using namespace std;

int main(void){
	//map<key_type, val_type> map_name;
	map<int, string> m;


	//map_name[key] = val
	m[1] = "Zee";
	m[3] = "Ankit";
	m[2] = "Anand";
	// m[4] = "Anmol";
	m.insert({10, "Anmol"});

	m.insert({-1, "Himanshu"});

	cout<<m[2]<<endl;

	// for(int i = 0; i < n; i++){
	// 	//standard for-loop
	// }

	//using for-each loop
	for(pair<int,string> i : m){
		// i == {key, val}
		cout<<i.first<<' '<<i.second<<endl;
	}

	//using iterators
	for(map<int,string>::iterator ir = m.begin(); ir != m.end(); ir++){
		cout<<ir->first<<' '<<ir->second<<endl;
	}

	cout<<endl;

	// //for-each loop
	// int arr[5];
	// for(int i = 0; i < 5; i++)
	// 	arr[i] = i+1;


	// for(int i : arr){
	// 	cout<<i<<' ';
	// }

	//to check if a particular key exists or not
	// cout<<m.count(5)<<endl;
	// cout<<m[5]<<endl;
	// cout<<m.count(5)<<endl;
	

	// cout<<m.size()<<endl;

	// auto temp = m.find(2);
	// if(temp != m.end()){
	// 	cout<<temp->first<<' '<<temp->second<<endl;
	// }

	m.erase(1);

	// cout<<m.size()<<endl;
	for(auto ir = m.begin(); ir != m.end(); ir++){
		cout<<ir->first<<' '<<ir->second<<endl;
	}

	auto it = m.find(1);
	if(it != m.end()){
		m.erase(it);
	}
}