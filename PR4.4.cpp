#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double xp, xk, dx, R1, R2, y, x;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;

    cout << fixed;
    cout << "-------------------------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
            << setw(10) << "R1" << " |"
            << setw(13) << "R2" << " |"
            << setw(16) << "y" << " |" << endl;
    cout << "-------------------------------------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
       if (x <= -R1)
          y = -(R1 / (R1 + 2)) * (x + 2);
       else if (x >= -R1 && x <= 0)
          y = -R1 + sqrt(pow(R1, 2) - pow(x, 2));
       else if (x >= 0 && x <= R2)
          y = R2 - sqrt(pow(R2, 2) - pow(x, 2));
       else if (x >= R2 && x <= 4)
          y = -R1;
       else
          y = R1 + (R1 / 10) * (x - 4);

    cout << endl;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << R1
            << " |" << setw(13) << setprecision(3) << R2
            << " |" << setw(16) << setprecision(3) << y
            << " |" << endl;
        x += dx;
     }

    cout << "-------------------------------------------------------" << endl;

    return 0;
}
