#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Vnesi dva celi broja (a i b):" << endl;
    cin >> a >> b;

    // Aritmeticki operacii
    cout << "Aritmeticki operacii:" << endl;

    c = a + b;
    cout << "a + b = " << c << endl;

    c = a - b;
    cout << "a - b = " << c << endl;

    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << " (celobrojno delenje)" << endl;
    cout << "a % b = " << a % b << " (modulo - ostatok)" << endl;

    // Kastiranje
    cout << "Delenje so kastiranje vo float:" << endl;
    cout << "float(a) / b = " << float(a) / b << endl;
    cout << "a / float(b) = " << a / float(b) << endl;

    // Prefiks i postfiks inkrement i dekrement
    cout << "Prefiks i postfiks inkrement i dekrement:" << endl;

    a--;
    cout << "Vrednosta na a e: " << a << endl;

    cout << "Vrednosta na a so postfiks e: " << a-- << endl;
    cout << "Vrednosta na a e: " << a << endl;

    cout << "Vrednosta na a so postfiks e: " << a++ << endl;
    cout << "Vrednosta na a e: " << a << endl;

    b = a++;
    cout << "Vrednosta na b e: " << b << endl;
    cout << "Vrednosta na a e: " << a << endl;

    ++a;
    cout << "So prefiks a e: " << a << endl;

    cout << "++a: " << ++a << endl;

    b = ++a;
    cout << "Vrednosta na b e: " << b << endl;
    cout << "Vrednosta na a e: " << a << endl;
    return 0;
}
