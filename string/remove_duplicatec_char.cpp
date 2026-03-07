#include <iostream>
using namespace std;

int main() {
    string s;
    cin>>s;
    bool seen[256]={false};
    for(char c:s) {
        if(!seen[c]) {
            cout<<c;
            seen[c]=true;
        }
    }
    return 0;
}
