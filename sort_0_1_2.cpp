#include <iostream>
using namespace std;
void sort(int arr[], int n){
    int count0=0, count1=0, count2=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        }
        else if(arr[i]==2){
            count2++;
        }
    }
    int index=0;
    while(count0--){
        arr[index++]=0;
    }
    while(count1--){
        arr[index++]=1;
    }
    while(count2--){
        arr[index++]=2;
    }
}
int print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n=10;
    int arr[] = {0,2,2,1,0,2,1,1,0,2};
    sort(arr, n);
    print(arr, n);
    return 0;
    

}