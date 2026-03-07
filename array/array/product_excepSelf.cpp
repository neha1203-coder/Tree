#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,3,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result[n];

    // for(int i=0; i<n; i++){
    //     int product=1;
    //     for(int j=0; j<n; j++){
    //         if(i!=j){
    //             product*=arr[j];
    //         }
    //     }
    //     result[i]=product;
    // }
    // for(int i=0; i<n; i++){
    //     cout<<result[i]<<" ";
    // }
    // return 0;



    result[0]=1;
    for(int i=1; i<n; i++){
        result[i] = result[i-1]*arr[i-1];
    }

    int right=1;
    for(int i=n-1; i>=0; i--){
        result[i] = result[i]*right;
        right = right*arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<result[i]<<" ";
    }
    return 0;
}