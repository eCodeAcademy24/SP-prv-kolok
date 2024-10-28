#include <iostream>
//Од стандарден влез се внесуваат два цели броја N и Х.
//
//Да се најде најблискот број помал од N коj е тотално различен од бројот Х.
//
//Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.

//Input
// 88 7
//Output
// 86

//Input
// 2 1
//Output
// 0

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int flag = 1;

    for (int i = n - 1; i > 0; i--) {
        flag = 1;
        int tmpX = x;
        int tmp = i;
        while (tmp) {
            if (tmp % 10 == tmpX % 10) {
                flag = 0;
                break;
            }

            tmpX /= 10;
            if (tmpX == 0) {
                tmpX = x;
                tmp /= 10;
            }
        }

        if (flag) {
            cout << i;
            break;
        }
    }

    if (flag == 0) {
        cout << "0";
    }
    return 0;
}
