#include <iostream>
using namespace std;
int minOfTwo(int a, int b){  //here in () are parameters
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    cout<<"min = "<<minOfTwo(12, 83)<<endl; // here in () are arguments
    return 0;
}