#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of cars: ";
    cin >> n;

    int car[n], fine[n];

    cout << "Enter car numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> car[i];
    }

    cout << "Enter fines:\n";
    for (int i = 0; i < n; i++) {
        cin >> fine[i];
    }

    int date;
    cout << "Enter date: ";
    cin >> date;

    int totalFine = 0;

    for (int i = 0; i < n; i++) {
        if (date % 2 == 0) {
            
            if (car[i] % 2 != 0)
                totalFine += fine[i];
        } 
        else
         {
            
            if (car[i] % 2 == 0)
                totalFine += fine[i];
        }
    }

    cout << "Total fine collected = " << totalFine;

   return 0;
}
