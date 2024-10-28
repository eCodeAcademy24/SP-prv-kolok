#include <iostream>
//Да се напише програма која ќе прочита два природни броја. Програмата треба да провери дали сите
// цифри од првиот број се појавуваат во вториот број.
//Ако овој услов е исполнет, програмата печати DA, во спротивно NE.

//Input
//421988 4111992
//Output
//NE

//Input
//3322 123
//Output
//DA
using namespace std;

int main() {
    int prv, vtor;
    cin >> prv >> vtor;

    while (prv != 0) {
        int flag = 0;
        int tmp = vtor;
        int poslednaCifraPrv = prv % 10;
        while (tmp) {
            int poslednaCifraVtor = tmp % 10;
            if (poslednaCifraPrv == poslednaCifraVtor) {
                flag = 1;
                break;
            }

            tmp /= 10;
        }

        if (flag == 0) {
            cout << "NE";
            break;
        }

        prv /= 10;
    }

    if (prv == 0) {
        cout << "DA";
    }
    return 0;
}