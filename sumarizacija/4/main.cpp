#include <iostream>
// Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8). Во зададен опсег
// (почетокот m и крајот на опсегот n се цели броеви чија вредност се внесува од тастатура),
// да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.

//Input
// 99 500
//Output
// 200

//Input
// 10 19
//Output
// NE

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int flag = 1;

    for (int i = m; i <= n; i++) {
        flag = 1; // da pretpostavuvame deka brojot e blag, za sekoj posebno
        int tmp = i;
        while (tmp != 0) {
            int poslednaCira = tmp % 10;
            if (poslednaCira % 2 != 0) {
                flag = 0; // brojot ne e blag
                break;
            }

            tmp /= 10;
        }

        if (flag) {
            cout << i;
            break;
        }
    }

    if (!flag) {
        cout << "NE";
    }
    return 0;
}
