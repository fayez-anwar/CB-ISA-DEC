#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n], b[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        b[i] = arr[i];
    }
    sort(b, b + n);
    int l = 0;
    while(l < n and arr[l] == b[l]){
        l++;
    }
    int r = n - 1;
    while(r >= l and arr[r] == b[r]){
        r--;
    }

    if(l > r) {
        cout<<"0";
    }
    else{
        cout<<(r-l+1)<<endl;
    }
}
