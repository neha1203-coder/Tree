#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string word;
    stringstream ss(s);
    while (ss >> word) {
        for (int i = word.length() - 1; i >= 0; i--)
            cout << word[i];
        cout << " ";
    }
    return 0;
}
