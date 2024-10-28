#include <iostream>
//Цик-цак е број за кој важи дека за секој пар соседни цифри во бројот важи дека едната е помала од 5,
// а другата е поголема или еднаква на 5. На пример, ако бројот x е составен од цифрите a, b, c и d, тогаш за нив важи:
//
//a<5, b>=5, c<5, d>=5 или a>=5, b<5, c>=5, d<5
//
//Пр.  508294, 2638, 81
//Од тастатура се читаат непознат број на цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат).
// Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.

//Input
// 5005
// 5050
// 60619
// 21365
// 12345
// 8045
// 8050
// k
//Output
// 5050
// 60619
// 8050

using namespace std;

int main() {
    int n;
    int flag = 0;
    int cifra1 = 0;
    int counter = 0;

    while (cin >> n) {
        if (n < 10) {
            continue;
        }
        counter = 0;
        int tmp = n;
        while (tmp) {
            counter++;
            if (counter == 1) {
                cifra1 = tmp % 10;
                flag = 1;
                tmp /= 10;
                continue;
            }
            if ((tmp % 10) >= 5) {
                if (cifra1 < 5) {
                    flag = 1;
                } else {
                    flag = 0;
                    break;
                }
            } else if ((tmp % 10) < 5) {
                if (cifra1 >= 5) {
                    flag = 1;
                } else {
                    flag = 0;
                    break;
                }
            }
            cifra1 = tmp % 10;
            tmp /= 10;
        }
        if (flag == 1) {
            cout << n << endl;
        } else {
            continue;
        }
    }

    return 0;
}
