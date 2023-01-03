#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    bool isPrime = true;
    for(int i = 2; i <= n - 1; i = i + 1){
        int remainder = n%i;
        if(remainder == 0){
            isPrime = false;
        }
    }
    if(isPrime == true)
        cout<<"Prime";
    else
        cout<<"Not Prime";
}
