#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double xp, xk, dx;

    // Введення параметрів табулювання
    cout << "Введіть xp (X_поч): "; cin >> xp;
    cout << "Введіть xk (X_кін): "; cin >> xk;
    cout << "Введіть dx (крок): "; cin >> dx;

    cout << endl;
    cout << "===========================" << endl;
    cout << "   Таблиця значень y(x)   " << endl;
    cout << "===========================" << endl;
    cout << "|" << setw(7) << "X" << " |"
        << setw(10) << "Y" << " |" << endl;
    cout << "---------------------------" << endl;

    double x = xp;
    while (x <= xk + dx / 2.0) // dx/2.0 захищає від похибки збереження чисел з плаваючою крапкою
    {
        double y;

        if (x < -7.0)
        {
            y = 0.0;
        }
        else if (x >= -7.0 && x < -3.0)
        {
            y = x + 7.0;
        }
        else if (x >= -3.0 && x < -2.0)
        {
            y = 4.0;
        }
        else if (x >= -2.0 && x < 2.0)
        {
            y = x * x;
        }
        else if (x >= 2.0 && x < 4.0)
        {
            y = -2.0 * x + 8.0;
        }
        else // x >= 4.0
        {
            y = 0.0;
        }

        cout << "|" << setw(7) << fixed << setprecision(2) << x
            << " |" << setw(10) << fixed << setprecision(3) << y
            << " |" << endl;

        x += dx;
    }

    cout << "===========================" << endl;

    return 0;
}