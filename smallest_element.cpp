#include <iostream>
using namespace std;
int main(){
    int a[] = {34,53,75,87,24,97};
    int smallest = a[0];
    for(int i=1; i<6; i++){
        if(a[i]<smallest){
            smallest = a[i];
        }
    }
    cout<<smallest<<" is the smallest element of an array"<<endl;
    return 0;
}