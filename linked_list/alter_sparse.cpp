#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of non-zero elements + 1: ";
    cin >> n;

    int sparse[n][3];
    cout << "Enter triplet representation:\n";
    for(int i = 0; i < n; i++)
        cin >> sparse[i][0] >> sparse[i][1] >> sparse[i][2];

    int transpose[n][3];

    // First row
    transpose[0][0] = sparse[0][1];
    transpose[0][1] = sparse[0][0];
    transpose[0][2] = sparse[0][2];

    int k = 1;
    for(int col = 0; col < sparse[0][1]; col++) {
        for(int i = 1; i < n; i++) {
            if(sparse[i][1] == col) {
                transpose[k][0] = sparse[i][1];
                transpose[k][1] = sparse[i][0];
                transpose[k][2] = sparse[i][2];
                k++;
            }
        }
    }

    cout << "\nTranspose Triplet Representation:\n";
    for(int i = 0; i < n; i++) {
        cout << transpose[i][0] << " "
             << transpose[i][1] << " "
             << transpose[i][2] << endl;
    }

    return 0;
}
