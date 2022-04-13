#include "4.h"

int main()
{
    using namespace std;
    double a = 4.8, b = -7.9;
    double(*actionN)(double a, double b);

    actionN = OptionOfN(a, b);
    double n = actionN(a, b);
    double(*actionM)(double a, double b, double n);
    actionM = OptionOfM(a, b, n);
    double m = actionM(a, b, n);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "n = " << n << endl;
    cout << "m = " << m << endl;
}
