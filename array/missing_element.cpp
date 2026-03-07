#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,5};
    for(int i=0; i<4; i++){
        if(arr[i] != i+1){
            cout<<"missing element is "<<i+1;
        }
    }
    return 0;
}