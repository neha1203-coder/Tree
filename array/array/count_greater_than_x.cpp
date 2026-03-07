#include <iostream>
using namespace std;
int main(){
    int arr[10] = {11,12,32,42,53,65,65,34,66,76};
    int x;
    cout<<"enter a number"<<endl;
    cin>>x;
    int count=0;
    for(int i=0; i<10; i++){
        if(x<arr[i]){
            count++;
            cout<<arr[i]<<endl;
        }
    }
    
    cout<<count<<" numbers are greater than "<<x<<endl;

    return 0;
}