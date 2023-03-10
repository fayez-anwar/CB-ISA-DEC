#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int p = 0, q = 0;
    while(q + 1 < n){
        if(arr[q + 1] == arr[q] + 1){
            q++;
        }
        else{
            if(arr[p] == arr[q]){
                cout<<arr[p]<<endl;
            }
            else{
                cout<<arr[p]<<"->"<<arr[q]<<endl;
            }
            p = ++q;
        }
    }
    if(arr[p] == arr[q]){
        cout<<arr[p]<<endl;
    }
    else{
        cout<<arr[p]<<"->"<<arr[q]<<endl;
    }
}
