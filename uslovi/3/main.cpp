#include <iostream>
//Да се напише програма која за петцифрен број прочитан од стандарден влез ќе проверува дали е палиндром.
// Ако бројот е палиндром, на екран треба да се испечати пораката "Palindrom", а во спротивно - "Ne e palindrom".
// Доколку внесениот број не е петцифрен треба да се испечати пораката "Nevaliden vlez".

//Input
// 44444
//Output
// Palindrom

//Input
// 12321
//Output
// Palindrom

//Input
// 123
//Output
// Nevaliden vlez!

using namespace std;

int main() {
    int broj;
    cin >> broj;

    if (broj < 10000 || broj > 99999) {
        cout << "Nevaliden vlez!";
    } else {
        int obraten = 0;

        // 12321
        obraten = obraten * 10 + (broj % 10);
        obraten = obraten * 10 + ((broj / 10) % 10);
        obraten = obraten * 10 + ((broj / 100) % 10);
        obraten = obraten * 10 + ((broj / 1000) % 10);
        obraten = obraten * 10 + (broj / 10000);

        if (broj == obraten) {
            cout << "Palindrom";
        } else {
            cout << "Ne e palindrom";
        }
    }


    return 0;
}