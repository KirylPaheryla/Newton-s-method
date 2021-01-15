#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double f(double x)
{
    double c = 2.1;
    double d = 3.7;

    return (x+c)*(x-d)*(x-d)*(x-d);
}

double fpoh(double x)
{
    double c = 2.1;
    double d = 3.7;

    return (3*c-d+4*x)*(x-d)*(x-d);
}

int main()
{
    double x, h;
    double e = 0.0000000001;
    int k = 0;

    cout << "x = "; cin >> x; cout << endl;

    do
    {

        h = (-(f(x)))/(fpoh(x));
        x = x + h;
        k++;

    }while(fabs(h) > e);

    cout << "k = " << k << endl;
    cout << "x = " << setprecision(15) << x << endl;

    return 0;
}
