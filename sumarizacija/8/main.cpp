#include <iostream>
#include <iomanip>
// Да се напише програма во која од стандарден влез прво се внесува еден позитивен цел број z,
// а потоа последователно се внесуваат парови цели броеви (a, b).
// Внесувањето на парови цели броеви треба да заврши кога корисникот ќе го внесе парот (0, 0).
// Треба да се пресмета колку пати z е еднаков на збирот на секој внесен пар броеви a и b,
// како и колкав процент од вкупниот број внесени парови (a, b) даваат збир z
// (ЗАБЕЛЕШКА: парот (0, 0) не се зема во предвид при извршувањето на пресметките!).

//Input
// 100
// 50 50
// -50 -50
// -99 199
// 32 98
// 0 0
//Output
// Vnesovte 2 parovi od broevi chij zbir e 100
// Procentot na parovi so zbir 100 e 50.00%

//Input
// 26
// 14 12
// 4 23
// 5 20
// 0 0
//Output
// Vnesovte 1 parovi od broevi chij zbir e 26
// Procentot na parovi so zbir 26 e 33.33%

using namespace std;

int main() {
    int z;
    cin >> z;

    int total_parovi = 0;
    int ednakvi_na_z = 0;

    while (true) {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }

        if (z == a + b) {
            ++ednakvi_na_z;
        }

        ++total_parovi;
    }

    cout << "Vnesovte " << ednakvi_na_z << " chij zbir e " << z << endl;
    cout << "Procentot na parovi so zbir " << z << " e " << fixed << setprecision(2)
         << (ednakvi_na_z / (float) total_parovi) * 100 << "%";
    return 0;
}
