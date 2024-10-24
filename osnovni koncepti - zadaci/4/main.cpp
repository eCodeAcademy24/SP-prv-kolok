#include <iostream>

using namespace std;
//Да се напише програма каде од тастатура се внесува одреден износ на пари кој корисник
// го има на својата трансакциска сметка. Потоа, во нов ред се внесува
// сумата на еден производ кој го купил, на кој дополнително треба да плати
// и ДДВ(18% од таа сума). Програмата печати 1 доколку после плаќањето на ДДВ корисникот има барем 1 денар на својата сметка, а 0 во спротивно.

// Input
// 2361 --> iznos pari
// 2000 --> suma proizvod
// Output
// 1

//Input
// 2360
// 2000
//Output
// 0

int main() {
    float iznosPari, sumaProizvod;
    cin >> iznosPari >> sumaProizvod;

    bool daliImaPari = (iznosPari - (sumaProizvod * 1.18)) > 0;
    cout << daliImaPari;
    return 0;
}
