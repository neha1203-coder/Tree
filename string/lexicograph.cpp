#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s, minStr;
    cin >> minStr;
    for(int i = 1; i < n; i++) {
        cin >> s;
        if(s < minStr) minStr = s;
    }
    cout << minStr;
    return 0;
}
