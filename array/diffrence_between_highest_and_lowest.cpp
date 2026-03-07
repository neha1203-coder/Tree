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

    int highest = a[0];
    int lowest  = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > highest)
            highest = a[i];
        if (a[i] < lowest)
            lowest = a[i];
    }

    int difference = highest - lowest;

    cout << "Difference between highest and lowest = " << difference;

    return 0;
}
