#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n], b[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    int l1 = n;
    for(int i = 1; i < n; i++){
        // if(arr[i] >= arr[i-1]) l1 = i;
        if(arr[i] < arr[i-1]){
            l1 = i - 1;
            break;
        }
    }
    // cout<<l1<<endl;
    int minAfter = INT_MAX;
    for(int i = l1 + 1; i < n; i++){
        minAfter = min(minAfter, arr[i]);
    }

    int l = n;
    for(int i = 0; i < n; i++){
        // if(arr[i] <= minAfter){
        //     l = i + 1;
        // }
        if(arr[i] > minAfter){
            l = i;
            break;
        }
    }

    int r1 = -1;
    for(int i = n - 2; i >= 0; i--){
        // if(arr[i] <= arr[i+1]) r1 = i;
        if(arr[i] > arr[i+1]){
            r1 = i + 1;
            break;
        }
    }

    int maxBefore = INT_MIN;
    for(int i = r1 - 1; i >= 0; i--){
        maxBefore = max(maxBefore, arr[i]);
    }

    int r = -1;
    for(int i = n - 1; i >= 0; i--){
        // if(arr[i] >= maxBefore){
        //     r = i - 1;
        // }
        if(arr[i] < maxBefore){
            r = i;
            break;
        }
    }
    // cout<<l<<' '<<r<<endl;
    if(l > r) {
        cout<<"0";
    }
    else{
        cout<<(r-l+1)<<endl;
    }
}
