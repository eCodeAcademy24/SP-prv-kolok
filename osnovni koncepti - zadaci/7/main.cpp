#include <iostream>

using namespace std;
//Да се напише програма која ќе чита три цели броја (x,y,z) од тастатура и на екран ќе го испечати резултатот од следниот израз ++x - --y + z++ + (x>z)
// Кој резултат ќе се добие доколку ги нема заградите, т.е. изразот е ++x - --y + z++ + x>z? Испечатете го и овај резултат,
// одделен со празно место од првиот резултат, како во примерот.

//Input
// 1 2 3
// Output
// 4 1

//Input
// 0 8 0
//Output
// -6 0

//Input
// 1 0 0
//Output
// 4 1

int main() {
    int x, y, z, rezultat, rezultat1;
    cin >> x >> y >> z;

    rezultat = ++x - --y + z++ + (x > z);
    rezultat1 = ++x - --y + z++ + x > z;

    cout << rezultat << " " << rezultat1;
    return 0;
}

