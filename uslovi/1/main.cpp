#include <iostream>
//За даден број, проверете дали е 7-цифрен и ако е, испечате ги во посебен ред секој од неговите цифри почнувајќи од првата,
// а потоа повторно во посебен ред нивната сума и производ.
//
//Ако бројот не е 7 цифрен само испечатете "Vneseniot broj ne e 7 cifren!".
//Input
// 1000000
//Output
//1
//0
//0
//0
//0
//0
//0
//1
//0

//Input
//7654321
//Output
//7
//6
//5
//4
//3
//2
//1
//28 --> suma
//5040 --> proizvod
using namespace std;

int main() {
    int broj;
    cin >> broj;

//    if (broj >= 1000000 && broj <= 9999999) {
//        //TODO: main logic
//    } else {
//        cout << "Vneseniot broj ne e 7 cifren!";
//    }

    if (broj < 1000000 || broj > 9999999) { // then
        cout << "Vneseniot broj ne e 7 cifren!";
    } else {
        int c1, c2, c3, c4, c5, c6, c7;

        //7654321
        c1 = broj / 1000000;
        cout << c1 << endl;

        c2 = (broj / 100000) % 10;
        cout << c2 << endl;

        c3 = (broj / 10000) % 10;
        cout << c3 << endl;

        c4 = (broj / 1000) % 10;
        cout << c4 << endl;

        c5 = (broj / 100) % 10;
        cout << c5 << endl;

        c6 = (broj / 10) % 10;
        cout << c6 << endl;

        c7 = broj % 10;
        cout << c7 << endl;

        int suma = c1 + c2 + c3 + c4 + c5 + c6 + c7;
        cout << suma << endl;

        int proizvod = c1 * c2 * c3 * c4 * c5 * c6 * c7;
        cout << proizvod << endl;
    }

    return 0;
}