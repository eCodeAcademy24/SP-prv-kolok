#include <iostream>

//Да се напише програма во која во даден опсег на природни броеви [m,n],
// ќе се најдат и отпечатат во нов ред сите броеви за кои важи дека збирот на бројот со неговата слика(број кој ги има истите цифри,
// но во обратен редослед) е помал или еднаков на двојната вредност на бројот.
// На крај да се отпечати и бројот на вакви броеви.

//Input
//1 19
//Output
//1
//2
//3
//4
//5
//6
//7
//8
//9
//10
//11
//Vkupno: 11

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int brojac = 0;

    for (int i = m; i <= n; i++) {
        int tmp = i;
        int slika = 0;
        while (tmp) {
            int poslednaCifra = tmp % 10;
            slika = slika * 10 + poslednaCifra;
            tmp /= 10;
        }

        int dvojna = i * 2;

        if ((slika + i) <= dvojna) {
            cout << i << endl;
            ++brojac;
        }
    }

    cout << "Vkupno: " << brojac;
    return 0;
}