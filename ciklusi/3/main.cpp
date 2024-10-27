#include <iostream>

// Да се напише програма во која во даден опсег на природни броеви [a,b],
// ќе се најдат и отпечатат сите броеви чијшто збир на цифри кои се деливи со 2, но НЕ се деливи со 3, е поголем од 0 и е делив со 7.
// На крај да се отпечати и бројот на вакви броеви.

//Input
//1200 2000
//Output
//1248
//1284
//1428
//1482
//1824
//1842
//Vkupno: 6

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int brojac = 0;

    for (int i = a; i <= b; i++) {
        int suma = 0;
        int tmp = i;
        while (tmp) {
            int poslednaCifra = tmp % 10;
            if (poslednaCifra % 2 == 0 && poslednaCifra % 3 != 0)
                suma += poslednaCifra;

            tmp /= 10;
        }

        if (suma > 0 && suma % 7 == 0) {
            cout << i << endl;
            ++brojac;
        }
    }

    cout << "Vkupno: " << brojac;
    return 0;
}