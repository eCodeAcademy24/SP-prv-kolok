#include <iostream>

using namespace std;

// Корисникот внесува две броеви и избира операција: собирање (+), одземање (-), множење (*), или делење (/).
// Програмата треба да прикаже резултат или порака ако се обиде да дели со нула.

//Input
// 5 2
// +
//Output
// Rezultat: 7

int main() {
    double num1, num2;
    char operation;
    cin >> num1 >> num2;
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Rezultat: " << num1 + num2;
            break;
        case '-':
            cout << "Rezultat: " << num1 - num2;
            break;
        case '*':
            cout << "Rezultat: " << num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Rezultat: " << num1 / num2;
            } else {
                cout << "Greshka: ne smee delenje so nula";
            }
            break;
        default:
            cout << "Nevalidna operacija!";
    }
    return 0;
}
