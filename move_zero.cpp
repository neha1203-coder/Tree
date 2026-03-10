#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,0,4,0,2,7,0,9};
    int n = sizeof(arr)/4;
    int j=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            arr[j] = arr[i];
            j++;
        }
    }
    while(j<n){
        arr[j] = 0;
        j++;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}