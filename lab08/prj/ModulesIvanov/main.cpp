#include <cmath>
double c_calculation(double x, double y)
{
    double S;
        S = pow(x, 2) - pow(y, 3) + sqrt(pow(y, x) - M_PI);
    return S;
}
