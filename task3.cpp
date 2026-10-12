
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, x, F;

    cout << "Enter a, b, c and x: ";
    cin >> a >> b >> c >> x;

    cout << "\nInitial values:" << endl;
    cout << "a = " << a << ", b = " << b
         << ", c = " << c << ", x = " << x << endl;

    if (x < 5 && c != 0) {
        F = -a * x * x - b;
        cout << "Using the first formula." << endl;
    }
    else if (x > 5 && c == 0) {
        if (x == 0) {
            cout << "Error: division by zero." << endl;
            return 1;
        }
        F = (x - a) / x;
        cout << "Using the second formula." << endl;
    }
    else {
        if (c == 0) {
            cout << "Error: c cannot be zero in the third formula."
                 << endl;
            return 1;
        }
        F = -x / c;
        cout << "Using the third formula." << endl;
    }

    cout << "F = " << F << endl;

    return 0;
}
