#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++){
        //spaces
        for(int j = 1; j <= n - i; j++){
            cout<<' ';
        }
        //print T1
        for(int k = 1; k <= i; k++){
            cout<<(char)(64 + k);
        }
        //print T2
        for(int l = i-1; l >= 1; l--){
            cout<<(char)(64 + l);
        }
        cout<<endl;
    }
}
