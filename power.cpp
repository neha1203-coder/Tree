#include <iostream>
using namespace std;
// double power(double x, int n){
//     double result = 1;
//     for(int i=1; i<=n; i++){
//         result *= x;
//     }
//     return result;
// }
// int main(){
//     double x=2;
//     int n=5;
//     cout<<power(x, n);
//     return 0;
// }


// double power(double x, int n) {
//     if (n == 0)
//         return 1;

//     return x * power(x, n - 1);
// }

// int main() {
//     cout << power(2, 5);
//     return 0;
// }


double power(double x, int n){
    double result = 1;
    long long exp = n;
    if(exp < 0){
        x = 1/x;
        exp = -exp;
    }
    while(exp>0){
        if(exp%2==1)
        result *= x;
        x *= x;
        exp /= 2;
    }
    return result;
}
int main(){
    cout << power(2,5);
    return 0;
}

