#include <iostream>
using namespace std;

int main() {
    string s, res = "";
    getline(cin, s);
    for(char c : s)
        if(c == ' ') res += "%20";
        else res += c;
    cout << res;
    return 0;
}
