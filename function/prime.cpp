#include <iostream>
using namespace std;
int prime(int x){
    int flag=0;
    for(int i=2; i<=x-1; i++){
        if(x%i==0){
            flag+=1;
        }
    }
    if(flag>0){
        cout<<x<<" is prime";
    }
    else
    cout<<x<<" is not prime";
    return 0;
    
}
int main(){
    int a=789;
    cout<<prime(a)<<endl;
    return 0;
}