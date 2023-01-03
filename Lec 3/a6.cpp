#include <iostream>
using namespace std;
int main() {
    int m;
    cin>>m;

    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    for(int i = 1; i <= m; i++){
        // i represntd the line/row number
        if(i%2 == 1){//odd
            for(int j = 1; j <= i; j++){
                //j represents the col number
                if(j%2 == 1){//j is odd
                    cout<<"1 ";
                }
                else{//j is even
                    cout<<"0 ";
                }
            }
        }
        else{//even
            for(int j = 1; j <= i; j++){
                //j represents the col number
                if(j%2 == 1){
                    cout<<"0 ";
                }
                else{
                    cout<<"1 ";
                }
            }
        }
        cout<<endl;
    }
}
