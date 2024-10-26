#include <iostream>

using namespace std;
//Да се креира програма која што за вчитан датум од стандарден влез (во формат DD MM GGGG)
// ќе испечати на стандарден излез порака DA или NE
// во зависност од тоа дали внесениот датум е правилен или не.
//
//При одредување на валидноста на датумот во предвид да се земат сите фактори:
//
//дали месецот е број помеѓу 1 и 12
//дали денот одговара со бројот на денови во тој месец
//доколку е 29.02. да се внимава дали станува збор за престапна година
//престапна година е секоја година која што е делива со 400 или пак е делива со 4, но не и со 100.

//Input
//29 02 2000
//Output
// DA

//Input
//32 01 2018
//Output
// NE

//Input
//30 02 2016
//Output
//NE

int main() {
    int den, mesec, godina;
    cin >> den >> mesec >> godina;

    bool flag = true; // pretpostavka deka datumot e tochen

    if (mesec < 1 || mesec > 12) {
        flag = false; // pretpostavka e greshna, datumot ne e validen
    } else {
        // spored ovaa promenliva kje opredelime kolku denovi treba da ima vo mesecot
        int kolku_denovi;
        if (mesec == 2) { // Fevruari
            //Proverka dali godina e prestapna
            if ((godina % 400 == 0) || (godina % 4 == 0 && godina % 100 != 0)) { // tuka e prestapna
                kolku_denovi = 29;
            } else {
                kolku_denovi = 28;
            }
        } else if (mesec == 4 || mesec == 6 || mesec == 9 || mesec == 11) {
            kolku_denovi = 30; // April, Juni, Septemvri, Noemvri
        } else {
            kolku_denovi = 31; // Januari, Mart, Maj, Juli, Avgust, Oktomvri, Dekemvri
        }

        if (den < 1 || den > kolku_denovi) {
            flag = false; // greshna pretpostavka, datumot e greshen
        }
    }

    if (flag) {
        cout << "DA";
    } else {
        cout << "NE";
    }

    return 0;
}
