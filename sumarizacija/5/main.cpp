#include <iostream>
//Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
// Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356).
// Од тастатура се внесува природен број n ( n > 9).
// Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“.
// Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).

//Input
// 5
//Output
// Brojot ne e validen

//Input
// 50
//Output
// 49

//Input
// 10
//Output
// 9

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 10) {
        cout << "Brojot ne e validen";
        return 0;
    }

    int flag = 0; // ne postoi takov broj
//    int brojac = 0;

    for (int i = n - 1; i >= 10; i--) {
        int obraten = 0;
        int brojac_na_cifri = 0;
        int tmp = i;
        while (tmp) {
            obraten = obraten * 10 + tmp % 10;
            ++brojac_na_cifri;
            tmp /= 10;
        }

        if (obraten % brojac_na_cifri == 0) {
            flag = 1; //postoi takov broj
//            ++brojac;
            cout << i;
            break;
        }
    }

    if (flag == 0) {
        cout << "9";
    }

    return 0;
}
