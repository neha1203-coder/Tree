#include <iostream>
using namespace std;

int main() {
    string s, res = "";
    getline(cin, s);
    for(char c : s)
        if(isalnum(c)) res += c;
    cout << res;
    return 0;
}
