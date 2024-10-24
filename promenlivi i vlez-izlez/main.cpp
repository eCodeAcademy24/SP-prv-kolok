#include <iostream>

using namespace std;

int main() {
    int intVar;
    float floatVar;
    double doubleVar;
    char charVar;
    bool boolVar;
    long longVar;

    cout << "Vnesi int:" << endl;
    cin >> intVar;

    cout << "Vnesi float:" << endl;
    cin >> floatVar;

    cout << "Vnesi double:" << endl;
    cin >> doubleVar;

    cout << "Vnesi char:" << endl;
    cin >> charVar;

    cout << "Vnesi bool (0 ili 1):" << endl;
    cin >> boolVar;

    cout << "Vnesi long:" << endl;
    cin >> longVar;

    cout << "Vrednostite na promenlivite se:" << endl;
    cout << "int: " << intVar << endl;
    cout << "float: " << floatVar << endl;
    cout << "double: " << doubleVar << endl;
    cout << "char: " << charVar << endl;
    cout << "bool: " << boolVar << endl;
    cout << "long: " << longVar << endl;
    return 0;
}
