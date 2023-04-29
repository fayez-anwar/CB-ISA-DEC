#include <iostream>
#include <set>
#include <map>

using namespace std;

int main(void){
	// set<int> table;
	// int n, x;
	// cin>>n;
	// int maxOnTable = 0;
	// for (int i = 0; i < 2*n; ++i){
	// 	cin>>x;
	// 	if(table.count(x)){
	// 		//pair exists on the table
	// 		table.erase(x);
	// 	}
	// 	else{//if not forms a pair, put on table
	// 		table.insert(x);
	// 		maxOnTable = max(maxOnTable, (int)table.size());
	// 	}
	// }
	// cout<<maxOnTable;

	map<int, int> table;
	int n, x;
	cin>>n;
	int maxOnTable = 0;
	for (int i = 0; i < 2*n; ++i){
		cin>>x;
		if(table.count(x)){
			//pair exists on the table
			table.erase(x);
		}
		else{//if not forms a pair, put on table
			table.insert({x, 1});
			maxOnTable = max(maxOnTable, (int)table.size());
		}
	}
	cout<<maxOnTable;
}