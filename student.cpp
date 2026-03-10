#include <iostream>
using namespace std;
int main(){
   
    int marks[10] = {100, 73, 32, 84, 35, 42, 21, 83, 50, 66};
    for(int i=0; i<10; i++){
        if(marks[i]<35){
            cout<<i<<endl;
        }
    }
    return 0;
   
}
