#include <iostream>
// Дефинираме вредност d за тројка цели броеви a, b и c , така што таа се пресметува како сума меѓу апсолутните разлики од првиот и вториот број,
// од една страна, и вториот и третиот број, од друга страна:
//
//d = |(a-b)| + |(b-c)|
//
//Да се напише програма со којашто од тастатура се вчитуваат N тројки цели броеви (N се внесува од тастатура),
// и која што ја наоѓа и ја печати најмалата вредност за d од прочитаните тројки.
//
//Пример:
//
//Влез:
//
//3
//
//1 2 3
//
//22 30 22
//
//1 1 1
//
//Излез:
//
//0
//
//Објаснување:
//
//За тројката 1 2 3 вредноста d е: |(1-2)| + (2-3)| = 2
//
//За тројката 22 30 22 вредноста d е: |(22-30)| + |(30-22)| = 16
//
//За тројката 1 1 1 вредноста d е: |(1-1)| + |(1-1)| = 0
//
//Најмала вредност d: 0

//Input
//5
//1 21 3
//5 8 4
//2 1 9
//21 42 81
//2 5 2
//Output
//6

//Input
//11
//99 953 288
//546 762 195
//235 526 173
//280 456 866
//910 408 133
//658 104 255
//996 559 171
//390 165 171
//103 271 162
//395 993 629
//225 713 317
//Output
// 231

using namespace std;

int main() {
    int n;
    cin >> n;

    int min;
//    int counter = 0;
//    bool flag = true;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        //d = |(a-b)| + |(b-c)|
        int d = abs((a - b)) + abs((b - c));

//        Prv nachin
        if (i == 0) {
            min = d;
            continue;
        }

//        Vtor nachin
//        if (counter == 0) {
//            min = d;
//            ++counter;
//            continue;
//        }

//        Tret nachin
//        if (flag) {
//            min = d;
//            flag = false;
//            continue;
//        }

        if (d < min) {
            min = d;
        }
    }

    cout << min;
    return 0;
}