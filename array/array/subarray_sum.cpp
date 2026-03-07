#include <iostream>
using namespace std;
int main(){
    int n=7;
    int arr[] ={3,-5,3,5,-1,9,-8};
    int currsum;
    for(int st=0; st<n; st++){
        currsum=0;
        for(int end=st; end<n; end++){
            currsum+=arr[end];
            cout<<currsum<<" ";

        }
        cout<<endl;
    }
    
    return 0;
}