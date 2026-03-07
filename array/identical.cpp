#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"size of array:";
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++)
    {
        cout<<"enter 1st array: ";
       cin>>a[i];
       break;
       
    }
    for(int i=0; i<n; i++){
        cout<<"enter 2nd array: ";
        cin>>b[i];
        break;
    }
     bool identical = true;

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            identical = false;
            
        }
    }

    if (identical)
        cout<<"arrays are identical";
    else
        cout<<"arrays are not identical";
         return 0;

    
}