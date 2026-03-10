#include <iostream>
using namespace std;
int main(){
    int arr[10] = {12,53,64,62,73,13,64,87,46,23};
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(arr[i]==arr[j]){
            cout<<"duplicate element found "<<arr[i]<<endl;
            }
            else{
                cout<<"no duplicate element found"<<endl;
            }
        }
        
    }
    return 0;
}