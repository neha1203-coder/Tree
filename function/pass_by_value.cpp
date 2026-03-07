#include <iostream>
using namespace std;
int sum(int a, int b){
   a=a+12;
   b=b+2;
    return a+b;
}
int main(){
    int x=4, y=6;
    cout<<sum(x,y)<<endl;
    cout<<x<<endl<<y<<endl; //value of x and y does not change
    return 0;

}