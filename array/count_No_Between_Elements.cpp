#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x, y;
    cout << "Enter two elements: ";
    cin >> x >> y;

    int pos1 = -1, pos2 = -1;

    // find positions
    for (int i = 0; i < n; i++) {
        if (a[i] == x && pos1 == -1)
            pos1 = i;
        if (a[i] == y && pos2 == -1)
            pos2 = i;
    }

    if (pos1 == -1 || pos2 == -1) {
        cout << "Element not found";
    } else {
        int count = abs(pos1 - pos2) - 1;
        cout << "Number of elements between them = " << count;
    }

    return 0;
}
