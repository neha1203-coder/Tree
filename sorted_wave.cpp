#include <iostream>
using namespace std;
int main(){
    int arr[] = {10, 90, 49, 2, 1, 5, 23};
    int n = sizeof(arr)/4;

    for (int i=0; i<n; i+=2) {
        if (i>0 && arr[i] < arr[i-1])
            swap(arr[i], arr[i-1]);

        if (i < n-1 && arr[i] < arr[i+1])
            swap(arr[i], arr[i+1]);
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
        return 0;
}