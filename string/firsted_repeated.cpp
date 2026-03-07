#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int seen[256] = {0};
    for(char c : s) {
        if(seen[c]) {
            cout << c;
            return 0;
        }
        seen[c] = 1;
    }
    cout << "None";
    return 0;
}
