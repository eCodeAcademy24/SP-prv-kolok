#include <iostream>
//Во играта Бинго по редослед се извлекуваат непознат број броеви со вредности помеѓу 1 и 90. Секогаш се извлекуваат повеќе од 8 броја.
// Претпоставете дека внесувањето престанува кога ќе се внесе број кој не е во опсегот вредности.
//
//Освен главната добивка, играчите играат и на џокер број. Џокер бројот се формира на следниот начин:
// Се слепуваат помалку значајните цифри од првите 7 извлечени броја,
// и на тој број се додаваат сите следни внесени броеви. Ваша задача е да го отпечатите така добиениот џокер број.

//Input
//2 32 45 78 64 21 7 65 18 32 88 1 99
//Output
//2258621

//Input
//32 89 78 65 45 12 32 1 5 2 3 -8
//Output
// 2985533

using namespace std;

int main() {
    int n;

    int joker = 0;
    int counter = 0;

    while (cin >> n) {
        if (n < 1 || n > 90) {
            break;
        }

        ++counter;
        if (counter <= 7) {
            int pomalku_znacajna = n % 10;
            joker = joker * 10 + pomalku_znacajna;
        } else {
            joker += n;
        }
    }

    cout << joker;

    return 0;
}