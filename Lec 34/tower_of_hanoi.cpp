#include <iostream>
using namespace std;

int count = 0;

void moveDiscs(int n, int src, int aux, int dest){
	//base case
	if(n == 0){
		return;
	}

	moveDiscs(n-1, src, dest, aux);//step1

	cout<<"Move "<<n<<"th disc from T"<<src<<" to T"<<dest<<endl;//step2
    count++;

	moveDiscs(n-1, aux, src, dest);//step3
}

int main(void){
	int n;
	cin>>n;
	moveDiscs(n, 1, 3, 2);
    cout<<count;
	return 0;
}


// T1 source
// T2 destination
// T3 auxilary



// Move 1th disc from T1 to T3
// Move 2th disc from T1 to T2
// Move 1th disc from T3 to T2
// 3