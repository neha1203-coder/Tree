#include <iostream>
using namespace std;
int main(){
    int arr[10] = {732,534,754,758,246,875,797,456,654,756};
    int largest = arr[0];
    int Slargest;
    for(int i=1; i<10; i++){
        if(largest<arr[i]){
            Slargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && Slargest<arr[i]){
            Slargest=arr[i];
        }
    }
    cout<<Slargest<<" is the second largest element of an array"<<endl;
    return 0;
}