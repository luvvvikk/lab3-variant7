
#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter child's age (1-6): ";
    cin >> age;

    switch (age) {
        case 1:
        case 2:
            cout << "Yasельна група (ясельная группа)." << endl;
            break;

        case 3:
            cout << "Молодша група (младшая группа)." << endl;
            break;

        case 4:
            cout << "Середня група (средняя группа)." << endl;
            break;

        case 5:
        case 6:
            cout << "Старша група (старшая группа)." << endl;
            break;

        default:
            if (age < 1)
                cout << "Дитина ще зовсім мала." << endl;
            else
                cout << "Дитина вже доросла." << endl;
    }

    return 0;
}
