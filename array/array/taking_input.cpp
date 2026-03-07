#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int a[n];
    cout<<"enter elements of array"<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
    return 0;
}