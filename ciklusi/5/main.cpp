#include <iostream>
//Од стандарден влез се чита еден природен број n, по што се читаат n цели броеви. Да се најде најголемата разлика помеѓу два броја,
// од вака внесените броеви.

//Input
//5
//1 2 -1 -7 6
//Output
//Najgolema razlika: 13

using namespace std;

int main() {
    int n;
    cin >> n;

    int max, min;

    for (int i = 0; i < n; i++) {
        int broj;
        cin >> broj;

        if (i == 0) {
            min = broj;
            max = broj;
            continue;
        }

        if (broj > max) {
            max = broj;
        }

        if (broj < min) {
            min = broj;
        }
    }

    cout << "Najgolema razlika: " << max - min;

    return 0;
}