#include <iostream>

//Од тастатура се читаат непознат број позитивни цели броеви се додека не се внесе нешто различно од број.
// За секој број треба да се пресмета збирот на цифрата со максимална вредност од претходно внесениот број
// и сумата на цифрите на тековниот број (за првиот внесен број се пресметува само сумата на неговите цифри).
// За секој внесен број резултатот треба да се испечати во следниот формат:
//
//[број]: [сумата на цифрите на бројот + максималната цифра од претходниот број]
//
//342: 9   //3+4+2
//
//345: 16 //3+4+5+4
//
//123: 11 //1+2+3+5
//
//456: 18 //4+5+6+3

//Input
// 97654 48654 12345 12343 1263 12443 12643 12777 #
//Output
// 97654: 31
// 48654: 36
// 12345: 23
// 12343: 18
// 1263: 16
// 12443: 20
// 12643: 20
// 12777: 30

using namespace std;

int main() {

    int num;
    int sum = 0;
    int max = 0;
    int flag = 1;
    while (cin >> num) {
        int tmp = num;
        sum = 0;
        sum += max;
        flag = 1;
        while (tmp) {
            if (flag == 1) {
                max = tmp % 10;
                flag = 0;
                continue;
            }
            if (max < tmp % 10) {
                max = tmp % 10;
            }
            sum += tmp % 10;
            tmp /= 10;
        }

        cout << num << ": " << sum << endl;
    }
    return 0;
}
