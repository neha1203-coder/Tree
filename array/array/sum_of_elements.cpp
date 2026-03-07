#include <iostream>
using namespace std;
int main(){
    int sum = 0;
    int a[5] = {2,5,6,9,4};
    for(int i=0; i<5; i++){
        sum += a[i];
    }
    cout<<sum<<endl;
    return 0;
}