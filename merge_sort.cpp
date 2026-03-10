// sort two array in third array
#include <iostream>
using namespace std;
int main(){
    int n=5, m=5;
    int arr1[] = {2,5,7,9,10};
    int arr2[] = {1,3,4,6,8};
    int arr3[n+m];
    int i=0, j=0, k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else
        arr3[k++]=arr2[j++];

    }
    while(i<n)
    arr3[k++]=arr1[i++];
    while(j<m){
        arr3[k++]=arr2[j++];
    }
    cout<<"merged array: ";
    for(int i=0; i<n+m; i++){
        cout<<arr3[i]<<" ";
    }
return 0;
}