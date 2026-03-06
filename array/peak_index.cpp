#include <iostream>
using namespace std;
int peakIndex(int arr[], int n){
    for(int i=1; i<n-1; i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {0,2,5,7,6,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"peak found at index: "<<peakIndex(arr, n);
    return 0;
}



// int peakIndex(int arr[], int n){
//     int low=0, high=n-1;
//     while(low<high){
//         int mid = low + (high-low) /2;
//         if(arr[mid] < arr[mid+1])
//         low=mid+1;
//         else
//         high = mid;

//     }
//     return low;
// }
// int main(){
//     int arr[] = {0,2,5,7,6,3,1};
//     int n= sizeof(arr)/ sizeof(arr[0]);
//     cout<<peakIndex(arr,n);
//     return 0;

// }