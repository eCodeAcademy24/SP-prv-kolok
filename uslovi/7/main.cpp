#include <iostream>

using namespace std;
//Да се напише програма каде од тастатура се внесува еден седумцифрен број. Програмата печати DA доколку бројот е специјален,
// а NE во спротивно.
// Еден број е специјален доколку за него важи дека е делив со својата прва цифра и не е делив со збирот на последните две
// или доколку не е делив со својата втора цифра и не е делив со збирот на последните две. Да се внимава на делење со 0, т.е.
// да се испечати порака Nevaliden broj во таков случај.

//Input
// 1234567
//Output
// DA

//Input
// 1210212
//Output
// NE

//Input
// 1235000
//Output
// Nevaliden broj

int main() {
    int broj;
    cin >> broj;

    int prvaCifra = broj / 1000000;
    int vtoraCifra = (broj / 100000) % 10;
    int pretposlednaCifra = (broj / 10) % 10;
    int poslednaCifra = broj % 10;

    if (prvaCifra == 0 || vtoraCifra == 0 || pretposlednaCifra == 0 || poslednaCifra == 0) {
        cout << "Nevaliden broj";
    } else {
        int zbir = pretposlednaCifra + poslednaCifra;
        if ((broj % prvaCifra == 0 && broj % zbir != 0) || (broj % vtoraCifra != 0 && broj % zbir != 0)) {
            cout << "DA";
        } else {
            cout << "NE";
        }
    }

    return 0;
}
