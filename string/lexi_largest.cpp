#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s, maxStr;
    cin >> maxStr;
    for(int i = 1; i < n; i++) {
        cin >> s;
        if(s > maxStr) maxStr = s;
    }
    cout << maxStr;
    return 0;
}
