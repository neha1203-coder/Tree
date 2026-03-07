#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    for(char &c : s)
        if(c >= 'a' && c <= 'z') c -= 32;
        else if(c >= 'A' && c <= 'Z') c += 32;
    cout << s;
    return 0;
}
