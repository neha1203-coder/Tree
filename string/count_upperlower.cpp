#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int u = 0, l = 0;
    for(char c : s)
        if(c >= 'A' && c <= 'Z') u++;
        else if(c >= 'a' && c <= 'z') l++;
    cout << u << " " << l;
    return 0;
}
