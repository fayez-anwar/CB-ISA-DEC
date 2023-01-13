#include <iostream>
using namespace std;

//print in lexicographical order => dictionary order
//e n s w

int main(void){

	int n;
	cin>>n;

	char dir;

	int x = 0, y = 0;//initial position

	for (int i = 0; i < n; ++i)
	{
		cin>>dir;
		if(dir == 'N'){
			y++;
		}
		else if(dir == 'S'){
			y--;
		}
		else if(dir == 'E'){
			x++;
		}
		else if(dir == 'W'){
			x--;
		}
	}
	//we have our final co-ordinate/position

	if(x > 0){
		//go east
		for(int i = 0; i < x; i++){
			cout<<'E';
		}
	}
	else if(x < 0){
		//west
		for(int i = 0; i < abs(x); i++){
			cout<<'W';
		}
	}

	if(y > 0){
		//north
		for(int i = 0; i < y; i++){
			cout<<'N';
		}
	}
	else if(y < 0){
		//south
		for(int i = 0; i < (-1)*y; i++){
			cout<<'S';
		}
	}
	
}