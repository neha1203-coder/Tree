#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << (isdigit(s[0]) ? "Yes" : "No");
    return 0;
}
