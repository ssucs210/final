
#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

double sqrt(double value)
{
    const double tol = 0.000005;
    double old_app, new_app;

    old_app = value;
    new_app = (old_app + value/old_app)/2;
    while (fabs((new_app-old_app)/new_app) > tol)
    {
        old_app = new_app;
        new_app = (old_app + value/old_app)/2;
    }

    return new_app;
}
