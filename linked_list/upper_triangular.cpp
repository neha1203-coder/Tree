#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter order of matrix: ";
    cin >> n;

    int a[n][n];
    cout << "Enter matrix elements:\n";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    bool upper = true;
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(a[i][j] != 0) {
                upper = false;
                break;
            }
        }
    }

    if(upper)
        cout << "Matrix is Upper Triangular";
    else
        cout << "Matrix is NOT Upper Triangular";

    return 0;
}
