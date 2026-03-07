#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,1,0,0,0,1,0};
    int n = sizeof(arr)/4;
    int count = 0;
    int count1 = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            count++;
        }else if(arr[i]==1){
            count1++;
        }
    }
    cout<<"no of 1's is: "<<count1<<endl<<"no of 0's is: "<<count;
    return 0;
}