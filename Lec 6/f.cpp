#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++){
        //1
        for(int j = 1; j <= i; j++){
            cout<<'*';
        }
        cout<<' ';
        //2
        for(int k = 1; k <= n - i + 1; k++){
            cout<<'*';
        }
        cout<<' ';
        //3
        for(int l = 1; l <= n - i + 1; l++){
            cout<<'*';
        }
        cout<<' ';
        //4
        for(int m = 1; m <= i; m++){
            cout<<'*';
        }
        cout<<endl;
    }
}
