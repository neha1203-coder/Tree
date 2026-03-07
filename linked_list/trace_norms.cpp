#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;

    int a[m][n];
    cout << "Enter matrix elements:\n";
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    int trace = 0;
    double sum = 0;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            sum += a[i][j] * a[i][j];
            if(i == j)
                trace += a[i][j];
        }
    }

    double norm = sqrt(sum);

    cout << "Trace of matrix = " << trace << endl;
    cout << "Norm of matrix = " << norm;

    return 0;
}
