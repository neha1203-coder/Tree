#include <iostream>
using namespace std;

int main() {
    string s, res = "";
    cin >> s;
    for(char c : s)
        if(res.empty() || res.back() != c)
            res += c;
    cout << res;
    return 0;
}
