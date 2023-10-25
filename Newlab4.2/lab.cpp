#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x, xp, xk, dx, A, y;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << fixed;
    cout << "------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << " |" << endl;
    cout << "------------------------" << endl;

    x = xp;

    while (x <= xk) {
        if (x < -1) {
            y = sqrt(2) * pow(x, 3) - 7;
        }
        else if (-1 <= x && x < 3) {
            y = 2 * log10(1 - x / 4);
        }
        else if (x >= 1) {
            y = cos(abs(x)) + 3;
        }

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }

    cout << "------------------------" << endl;
    return 0;
}
