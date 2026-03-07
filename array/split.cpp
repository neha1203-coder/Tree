#include <iostream>
using namespace std;
bool split(int arr[], int n){
    int totalSum = 0;
    for(int i=0; i<n; i++)
    totalSum += arr[i];
    if(totalSum % 3 != 0)
    return false;
    int target = totalSum/3;
    int currentSum = 0;
    int count = 0;
    for(int i=0; i<n; i++)
    currentSum += arr[i];
    if(currentSum == target){
        count++;
        currentSum = 0;
    }
    return count >= 3;
}
int main(){
    int arr[] = {1,2,3,0,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(split(arr, n))
    cout<<"it split into 3 equal parts";
    else
    cout<<"no it cannot split ";
    return 0;
}