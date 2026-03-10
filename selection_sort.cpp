// time complexity is O(n^2)
#include <iostream>
using namespace std; 
void selectionsort(int arr[], int n){
    for(int i=0; i<n-1; i++){
       int smallestIdx=i;
       for(int j=i+1; j<n; j++){
        // if(arr[j]<arr[smallestIdx]) // accending order
        if(arr[j]>arr[smallestIdx]){  // decending order
            smallestIdx=j;
        }
       }
       swap(arr[i], arr[smallestIdx]);

    }
}
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n=8;
    int arr[] = {32,53,63,23,57,87,90,39};
    selectionsort(arr, n);
    print(arr, n);
    return 0;

}