#include <iostream>
//Од тастатура се читаат 2 позитивни цели броеви. Доколку се внесе барем еден негативен број или 0 треба да се печати „Invalid input“.
//
//Треба да се определи дали помалиот број “е парен еквивалент” од поголемиот број.
//
//Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри се наоѓаат на парните позиции од другиот број,
// во истиот редослед. Соодветно да се испечатат пораки „PAREN“ и „NE“.
//
//Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1)

//Input
// 12345678 1357
//Output
// PAREN

//Input
// 45 14456
//Output
// PAREN

//Input
// 1537 57
//Output
// NE

//Input
// 0 0
//Output
// Invalid input

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if (n <= 0 || m <= 0) {
        cout << "Invalid input";
        return 0;
    }

    if (n < m) {
        int tmp = n;
        n = m;
        m = tmp;
    }

    int brojac_na_pozicija = 1;
    int flag = 1;

    while (n != 0 && m != 0) {
        if (brojac_na_pozicija % 2 == 0) {
            if (m % 10 == n % 10) {
                m /= 10;
            } else {
                flag = 0;
                break;
            }
        }

        ++brojac_na_pozicija;
        n /= 10;
    }

    if (flag) {
        cout << "PAREN";
    } else {
        cout << "NE";
    }

    return 0;
}
