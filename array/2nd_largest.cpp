#include <iostream>
using namespace std;
int main(){
    int arr[] = {23,4,65,12};
     int largest = 0;
     int second_largest = 0;
    for(int i=0; i<3; i++){
        if(arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
            
            
        }
        else if(arr[i]>second_largest && arr[i]!=largest){
            arr[i] = second_largest;
        }
        


    }
    cout<<"second largest element :"<<second_largest;
    return 0;
   
}