//time complexity of bubble sort is O(n^2)
#include <iostream>
using namespace std;
void bubblesort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

}
// void bubblesort(int arr[], int n){
//     for(int i=0; i<n-1; i++){
//         bool isswap=false;

//         for(int j=0; j<n-i-1; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//                 isswap=true;
//             }
//         }
//         if(!isswap){
//             return;
//         }
//     }

// }
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n=5;
    int arr[] = {4,3,6,7,2};
    bubblesort(arr, n);
    printArray(arr, n);
    return 0;
}