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

    int sum = 0;

    for (int i = 0; i < n; i++) {
        int isDistinct = 1;

        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                isDistinct = 0;
                break;
            }
        }

        if (isDistinct == 1) {
            sum += a[i];
        }
    }

    cout << "Sum of distinct elements = " << sum;

    return 0;
}
