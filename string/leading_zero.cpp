#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int i = 0;
    while(i < s.length() && s[i] == '0') i++;
    cout << s.substr(i);
    return 0;
}
