#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void renderCell(double a, double b) {
    if (b == NULL) {
        cout << "\\" << setw(10) << a << " #" << setw(10) << "null" << " /" << endl;
    } else {
        cout << "\\" << setw(10) << a << " #" << setw(10) << b << " /" << endl;
    }
    cout << "/-----------------------\\" << endl;
}

int main() {
    const int
        start = 0,
        end = 40,
        step = 2;

    { // Table head output
        cout << "#=======================#" << endl;
        cout << "#     x     #     y     #" << endl;
        cout << "#=======================#" << endl;
    }

    for (int i = start; i <= end; i += step) {
        double y;
        if (i == 0) {
            renderCell(i, NULL);
            continue;
        }

        if (i < 20) {
            y = i * .3 + (1 / i);
        }
        else {
            y = sqrt(i * i + 3 * i) / .7;
        }

        // Table body output
        renderCell(i, y);
    }
}