#include <iostream>
// Од стандарден влез се читаат знаци се додека не се прочита извичник. Во вака внесениот текст се скриени цели броеви (помали од 100).
// Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот.

//Input
// 9Ako D1me ima 12 evra, za 9 dena, kje kupi 10ka!
//Output
// 41

using namespace std;

int main() {

    int broj = 0;
    int zbir = 0;

    while (true) {
        char znak;
        cin >> znak;

        if (znak == '!') {
            break;
        }

        switch (znak) {
            case '0':
                broj = broj * 10;
                break;
            case '1':
                broj = broj * 10 + 1;
                break;
            case '2':
                broj = broj * 10 + 2;
                break;
            case '3':
                broj = broj * 10 + 3;
                break;
            case '4':
                broj = broj * 10 + 4;
                break;
            case '5':
                broj = broj * 10 + 5;
                break;
            case '6':
                broj = broj * 10 + 6;
                break;
            case '7':
                broj = broj * 10 + 7;
                break;
            case '8':
                broj = broj * 10 + 8;
                break;
            case '9':
                broj = broj * 10 + 9;
                break;
            default:
                zbir += broj;
                broj = 0;
                break;
        }
    }

    zbir += broj;
    cout << zbir;
    return 0;
}
