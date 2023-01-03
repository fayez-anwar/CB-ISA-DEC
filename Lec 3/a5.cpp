#include <iostream>
using namespace std;
int main() {
    int m, n;
    cin>>m>>n;

    // * * * * *
    // # # # # #
    // * * * * *
    // # # # # #
    // * * * * *
    // # # # # #
    // * * * * *

    for(int i = 1; i <= m; i++){
        //i represntd the line/row number
        if(i%2 == 1){//odd
            for(int j = 1; j <= n; j++){
                //j represents the col number
                cout<<"* ";
            }
        }
        else{//even
            for(int j = 1; j <= n; j++){
                //j represents the col number
                cout<<"# ";
            }
        }
        cout<<endl;
    }
}
