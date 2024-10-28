#include <iostream>
//Од стандарден влез се чита еден природен број n. Меѓу природните броеви помали од n, да се најде оној
// чиј што збир на делителите е најголем. Во пресметувањето на збирот на делителите на даден број,
// да не се зема предвид самиот број.

//Input
// 10
//Output
// 8

//Input
// 50
//Output
// 48

using namespace std;

int main() {
    int n;
    cin >> n;

    int max = 0;
    int index = 1;

    for (int i = 1; i < n; i++) {
        int zbir = 0;
        for (int del = 1; del <= i / 2; del++) {
            if (i % del == 0) {
                zbir += del;
            }
        }

//        if (i == 1) {
//            max = zbir;
//            index = i;
//            continue;
//        }

        if (zbir > max) {
            max = zbir;
            index = i;
        }
    }

    cout << index;
    return 0;
}
