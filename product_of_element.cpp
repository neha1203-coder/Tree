#include <iostream>
using namespace std;
int main(){
    int product = 1;
    int arr[5] = {3,6,32,7,1};
    for(int i=0; i<5; i++){
        product*=arr[i];
    }
    cout<<"product of elements of an array: "<<product<<endl;
    return 0;

}