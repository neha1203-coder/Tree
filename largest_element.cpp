#include <iostream>
using namespace std;
int main(){
    int arr[] = {10,42,53,75,24,};
    int largest=arr[0];
    for(int i=1; i<5; i++){
        if(largest<arr[i]){
            largest = arr[i];
        }
    }
    cout<<largest<<" is the largest element of an array"<<endl;
    return 0;


}