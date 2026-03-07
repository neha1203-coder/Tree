#include <iostream>
using namespace std;

int main() {
    string s, word = "", longest = "";
    getline(cin, s);
    for(char c : s) {
        if(c == ' ') {
            if(word.length() > longest.length()) longest = word;
            word = "";
        } else word += c;
    }
    if(word.length() > longest.length()) longest = word;
    cout << longest;
    return 0;
}
