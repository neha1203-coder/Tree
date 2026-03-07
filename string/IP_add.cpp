#include <iostream>
using namespace std;

int main() {
    string ip;
    cin>>ip;
    int dots=0, num=0;
    for(int i=0;i<=ip.length();i++) {
        if(ip[i]=='.' || ip[i]=='\0') {
            if(num>255) { cout<<"Invalid"; return 0; }
            num=0; dots++;
        } else if(isdigit(ip[i])) {
            num=num*10+(ip[i]-'0');
        } else {
            cout<<"Invalid"; return 0;
        }
    }
    cout<<(dots==4?"Valid":"Invalid");
    return 0;
}
