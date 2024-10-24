#include <iostream>

using namespace std;

int main() {
    bool isSunny, isWeekend;
    cin >> isSunny >> isWeekend;

    bool andResult = isSunny && isWeekend;
    bool orResult = isSunny || isWeekend;
    bool notSunny = !isSunny;
    bool notWeekend = !isWeekend;

    cout << "And: " << andResult << endl;
    cout << "Or: " << orResult << endl;
    cout << "Not Sunny: " << notSunny << endl;
    cout << "Not Weekend: " << notWeekend << endl;

    int a, b;
    cin >> a >> b;

    bool isEqual = a == b;
    bool isNotEqual = a != b;
    bool isGreaterThan = a > b;
    bool isLessThan = a < b;
    bool isGreaterThanOrEqual = a >= b;
    bool isLessThanOrEqual = a <= b;

    cout << "Is equal: " << isEqual << endl;
    cout << "Is not equal: " << isNotEqual << endl;
    cout << "Is greater than: " << isGreaterThan << endl;
    cout << "Is less than: " << isLessThan << endl;
    cout << "Is greater than or equal: " << isGreaterThanOrEqual << endl;
    cout << "Is less than or equal: " << isLessThanOrEqual << endl;
    return 0;
}
