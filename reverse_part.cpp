#include <iostream>
using namespace std;
int main(){
    int arr[] = {12,21,42,23,43};
    int n = sizeof(arr)/4;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i=2, j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}