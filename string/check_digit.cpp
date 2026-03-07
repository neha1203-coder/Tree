#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    for(char c : s)
        if(c < '0' || c > '9') {
            cout << "No";
            return 0;
        }
    cout << "Yes";
    return 0;
}
