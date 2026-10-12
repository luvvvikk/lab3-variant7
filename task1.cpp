
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    cout << "\nInitial values: a = " << a
         << ", b = " << b << ", c = " << c << endl;

    int sum = a + b + c;
    cout << "Sum of numbers = " << sum << endl;

    if (sum < 50) {

        if (a > b) swap(a, b);
        if (a > c) swap(a, c);
        if (b > c) swap(b, c);

        cout << "Sum is less than 50." << endl;
        cout << "Numbers in ascending order: ";
    } else {

        if (a < b) swap(a, b);
        if (a < c) swap(a, c);
        if (b < c) swap(b, c);

        cout << "Sum is greater than or equal to 50." << endl;
        cout << "Numbers in descending order: ";
    }

    cout << a << " " << b << " " << c << endl;

    cout << "Final values: a = " << a
         << ", b = " << b << ", c = " << c << endl;

    return 0;
}
