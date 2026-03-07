#include <iostream>
using namespace std;
int sum(int num){
    int digitsum =0;
    while(num>0){
        int lastdigit = num%10;
        num = num/10;
        digitsum += lastdigit;
    }
    return digitsum;
}
int main(){
    int x = 23453;
    cout<<sum(x)<<endl;
    return 0;
}