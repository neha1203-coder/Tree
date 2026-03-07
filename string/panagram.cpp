#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    bool mark[26] = {false};

    for (char c : s) {
        if (isalpha(c))
            mark[tolower(c) - 'a'] = true;
    }

    for (int i = 0; i < 26; i++) {
        if (!mark[i]) {
            cout << "Not Pangram";
            return 0;
        }
    }
    cout << "Pangram";
    return 0;
}
