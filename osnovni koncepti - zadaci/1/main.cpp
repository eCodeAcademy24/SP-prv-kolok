#include <iostream>
#include <iomanip>

using namespace std;

// Да се напише програма која вчитува од стандарден влез два децимални броја (маса во кг и висина во цм) и пресметува
// и печати на стандарден излез индекс на телесна маса по формулата:
//
// BMI = masa / (visina * visina)
//
// Висината претходно треба да се претвори од сантиметри во метри.

//Input
// 45 150
//Output
// 20.00

//Input
// 75 186
//Output
// 21.68

int main() {
    float masa, visina;
    cin >> masa >> visina;

    visina /= 100;
//    visina = visina / 100; mozhe i vaka

    float BMI = masa / (visina * visina);
    cout << fixed << setprecision(2) << BMI;
    return 0;
}
