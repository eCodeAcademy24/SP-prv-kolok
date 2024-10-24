#include <iostream>
#include <iomanip>

using namespace std;
// Да се напише програма која пресметува просечна оцена во семестар. Програмата чита 5 цели броја.
// Треба да се испечати еден реален број на две децимали, просек на прочитаните броеви.

// Input
// 6 6 6 6 7
// Output
// 6.20
int main() {
    int ocena1, ocena2, ocena3, ocena4, ocena5;
    cin >> ocena1 >> ocena2 >> ocena3 >> ocena4 >> ocena5;

    int zbir = (ocena1 + ocena2 + ocena3 + ocena4 + ocena5);
    float prosecnaOcena = float(zbir) / 5;

    cout << fixed << setprecision(2) << prosecnaOcena;
    return 0;
}
