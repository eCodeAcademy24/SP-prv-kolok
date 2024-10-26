#include <iostream>

using namespace std;
//За дадени освоени поени пишете ја оценката која го следи студентот според дадените табели.
//
//0-50 = 5
//
//51-60 = 6
//
//61-70 = 7
//
//71-80 = 8
//
//81-90 = 9
//
//91-100 = 10
//
//Покрај оценките да се испечатат и знаците + и – во зависност од вредноста на последната цифра на поените:
//
//1 - 3 = "-"
//
//4 - 7 = " "
//
//8-0 = "+"

//Input
//101
//Output
//Nevalidna vrednost za poeni!

//Input
//79
//Output
//Ocenka 8+

//Input
// 101
//Output
// Nevalidna vrednost za poeni!

//Input
// 85
//Output
// Ocenka 9


int main() {
    int poeni;
    cin >> poeni;

    if (poeni < 0 || poeni > 100) {
        cout << "Nevalidna vrednost za poeni!";
    } else {
        int ocenka;

        if (poeni >= 0 && poeni <= 50) { //0-50 = 5
            ocenka = 5;
        } else if (poeni >= 51 && poeni <= 60) { //51-60 = 6
            ocenka = 6;
        } else if (poeni >= 61 && poeni <= 70) { //61-70 = 7
            ocenka = 7;
        } else if (poeni >= 71 && poeni <= 80) { //71-80 = 8
            ocenka = 8;
        } else if (poeni >= 81 && poeni <= 90) { //81-90 = 9
            ocenka = 9;
        } else /* if(poeni >= 91 && poeni <= 100) */ { //91-100 = 10
            ocenka = 10;
        }

        //1 - 3 = "-"
        //4 - 7 = " "
        //8 - 0 = "+"
        if (poeni >= 51 && poeni <= 100) {
            int poslednaCifra = poeni % 10;
            // Ocenka 9
            if (poslednaCifra >= 1 && poslednaCifra <= 3) {
                cout << "Ocenka " << ocenka << "-";
            } else if (poslednaCifra >= 4 && poslednaCifra <= 7) {
                cout << "Ocenka " << ocenka;
            } else {
                cout << "Ocenka " << ocenka << "+";
            }
        } else { // ova e ako imame ocenka 5
            cout << "Ocenka " << ocenka;
        }

    }


    return 0;
}