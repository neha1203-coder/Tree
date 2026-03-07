#include <iostream>
using namespace std;
int main(){
    int a[] = {34,42,53,23,75,79,14,23,46};
    int x;
    cout<<"enter search element"<<endl;
    cin>>x;
    double flag=false;
    for(int i=0; i<20; i++){
    if(a[i]==x){
        flag=true;
        break;
    }
}
if(flag=true){
    cout<<x<<" is present"<<endl;
}
else
cout<<x<<" is not present"<<endl;
    // for(int i=0; i<20; i++){
    //     if(a[i]==x){
    //         cout<<"match found"<<endl;
    //         break;
    //     }
        

    // }
    return 0;
}

    