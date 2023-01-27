#include <iostream>
#include <cstring>
using namespace std;

void append_string(char a[], char *b){
	//finding length
	int n1 = 0;//, n2 = 0;
	while(a[n1] != '\0'){
		n1++;
	}
	// while(b[n2] != '\0'){
	// 	n2++;
	// }

	int j = n1;
	for(int i = 0; b[i] != '\0'; i++){
		a[j] = b[i];
		j++;
	}
	a[j] = '\0';
}

char* append_string2(char *a, char *b){
	int j = strlen(a);

	for(int i = 0; b[i] != '\0'; i++){
		// a[j] = b[i];
		// j++;
		a[j++] = b[i];
	}
	a[j] = '\0';
	return a;
}


int main(void){
	char a[100];
	cin>>a;
	char b[100];
	cin>>b;

	// append b to a
	//FridayJanuary
	// append_string(a, b);

	cout<<append_string2(a, b);

	return 0;
}