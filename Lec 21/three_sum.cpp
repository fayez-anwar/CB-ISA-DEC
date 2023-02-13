#include <iostream>
using namespace std;

int main(void){
	int n;
	cin>>n;
	int freq[10] = {0};
	for (int i = 0; i < n; ++i){
		int x;
		cin>>x;
		freq[x%10]++;
	}

	for (int i = 0; i < 10; ++i){
		for(int j = i; j < 10; ++j){
			for(int k = j; k < 10; ++k){
				if((i+j+k)%10 == 3){
					freq[i]--;
					freq[j]--;
					freq[k]--;
					if(freq[i] >= 0 and freq[j] >= 0 and freq[k] >= 0){
						cout<<"YES";
						return 0;
					}
					freq[i]++;
					freq[j]++;
					freq[k]++;
				}
			}
		}
	}
	cout<<"NO";
	return 0;
}