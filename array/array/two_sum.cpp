#include <iostream>
using namespace std;
int main(){
    int n=6;
    int arr[n] = {1,2,3,7,8,9};
    int two_sum = 10;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==two_sum)
            cout<<arr[i]<<"and"<<arr[j]<<endl;

        }
    }
    return 0;
}