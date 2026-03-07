#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int mat[r][c];
    cout << "Enter matrix elements:\n";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> mat[i][j];

    // Count non-zero elements
    int count = 0;
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            if(mat[i][j] != 0)
                count++;

    // Triplet representation
    int sparse[count + 1][3];
    sparse[0][0] = r;
    sparse[0][1] = c;
    sparse[0][2] = count;

    int k = 1;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(mat[i][j] != 0) {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = mat[i][j];
                k++;
            }
        }
    }

    cout << "\nAlternative (Triplet) Representation:\n";
    for(int i = 0; i <= count; i++) {
        cout << sparse[i][0] << " "
             << sparse[i][1] << " "
             << sparse[i][2] << endl;
    }

    return 0;
}
