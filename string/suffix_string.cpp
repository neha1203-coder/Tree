#include <iostream>
using namespace std;

int main() {
    string s, suf;
    cin >> s >> suf;
    cout << (s.rfind(suf) == s.length() - suf.length() ? "Yes" : "No");
    return 0;
}
