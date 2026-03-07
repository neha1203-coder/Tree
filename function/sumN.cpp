#include <iostream>
using namespace std;
int sumN(int N){
    int sum = 0;
    for(int i=1; i<=N; i++){
        sum += i;
    }
    return sum;
}
int main(){
    cout<<sumN(34)<<endl;
    cout<<sumN(22)<<endl;
    return 0;
}