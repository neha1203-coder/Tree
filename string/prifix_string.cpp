#include <iostream>
using namespace std;

int main() {
    string s, pre;
    cin >> s >> pre;
    cout << (s.find(pre) == 0 ? "Yes" : "No");
    return 0;
}
