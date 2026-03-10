#include <iostream>
using namespace std;
// int main(){
//     //initialize and declare array
//     int a[5] = {1,5,3,6,2};
//     cout<<a[3]<<endl;
//     return 0;
// }
int main(){
    int arr[100]; //initialize array
    arr[0] = 12;  //declare array
    arr[1] = 39;  //declare array
    arr[2] = 53;
    arr[3] = 92;
    for(int i=0; i<=100; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}