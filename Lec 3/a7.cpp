#include <iostream>
using namespace std;
int main() {
    int m;
    cin>>m;

    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    int value = 1;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= i; j++){
            cout<<value<<' ';
            value++;
        }
        cout<<endl;
    }
}
