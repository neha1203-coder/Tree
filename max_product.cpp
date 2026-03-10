#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,5,3,4,2,};
    int n = sizeof(arr)/4;
    int largest = arr[0];
    int second_largest = -1;
    int third_largest = -1;
    for(int i=1; i<n; i++){
        if(arr[i]>largest){
        third_largest = second_largest;
        second_largest = largest;
        largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>second_largest){
            third_largest = second_largest;
            second_largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]<second_largest && arr[i]>third_largest){
            third_largest = arr[i];
        }
        
    }
    int product = largest*second_largest*third_largest;
    cout<<"maximum product of triplet of an array is: "<<product<<endl;
    return 0;
}