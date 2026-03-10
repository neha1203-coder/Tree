#include <iostream>
using namespace std;
int main(){
    int arr[] = {9,9,9};
    int n = sizeof(arr)/4;
    int carry = 1;
    for(int i=n-1; i>=0; i--){
        int sum = arr[i] + carry;
        arr[i] = sum%10;
        carry = sum/10;
    }
    if(carry == 1){
        cout<<1<<" ";
    }
    for(int i=0; i<n; i++ )
    cout<<arr[i]<<" ";
    return 0;
}