#include <iostream>
using namespace std;
void reverse(int arr[], int i, int j){
    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
int main(){
    int arr[] = {23,34,45,46,65,};
    int n = sizeof(arr)/4;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    int k=2;
    cout<<endl;
    reverse(arr, 0, n-k-1);
    reverse(arr, n-k, n-1);
    reverse(arr, 0, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}