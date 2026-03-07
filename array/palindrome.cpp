#include <iostream>
using namespace std;

bool isPalindrome(int a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (isPalindrome(a, n))
        cout << "Array is palindrome";
    else
        cout << "Array is not palindrome";

    return 0;
}
