#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++)
        for(int j = 1; j <= s.length() - i; j++)
            cout << s.substr(i, j) << endl;
    return 0;
}
