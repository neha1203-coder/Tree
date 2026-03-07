#include <iostream>
#include <sstream>
using namespace std;

bool isVowel(char c) {
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}

int main() {
    string s, word;
    getline(cin, s);
    stringstream ss(s);
    int count = 0;
    while(ss >> word)
        if(isVowel(tolower(word.back()))) count++;
    cout << count;
    return 0;
}
