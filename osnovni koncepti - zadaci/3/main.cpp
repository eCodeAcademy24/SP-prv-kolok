#include <iostream>

using namespace std;
//Да се напише програма коjа за даден цел броj секунди коj се чита од стандарден влез,
// ќе ги отпечати на екран соодветните вредности во часови, минути и секунди.

//Input
// 54321
//Output
// 54321 sekundi se 15 casovi, 5 minuti i 21 sekundi
int main() {
    int sec;
    cin >> sec;

    int hours = sec / 3600;
    int minutes = (sec % 3600) / 60;
    int seconds = sec % 60;
    cout << sec << " sekundi se " << hours << " casovi, " << minutes << " minuti i " << seconds << " sekundi";
    return 0;
}
