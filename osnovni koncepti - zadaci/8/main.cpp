#include <iostream>

using namespace std;
//Да се напише програма каде од тастатура се внесува одреден износ на пари кој корисник го има на својата трансакциска сметка.
// Потоа, во нов ред се внесуваат пет други износи оддвоени со празно место.
// Тие претставуваат некаква трансакција - одреден трошок или добивка на пари.
// Програмата печати 1 доколку после извршените трансакции корисникот сеуште има пари на својата сметка, а 0 во спротивно.

//Input
// 25600
// 10000 250 899 10 -45000
//Output
// 0

//Input
// 5000
// 1000 2000 1000 1000 1000
//Output
// 1

int main() {
    int iznosPari, transakcija1, transakcija2, transakcija3, transakcija4, transakcija5;
    cin >> iznosPari;
    cin >> transakcija1 >> transakcija2 >> transakcija3 >> transakcija4 >> transakcija5;

    int vkupnaTransakcija = transakcija1 + transakcija2 + transakcija3 + transakcija4 + transakcija5;

    bool daliImaPari = (iznosPari + vkupnaTransakcija) > 0;
    cout << daliImaPari;
    return 0;
}
