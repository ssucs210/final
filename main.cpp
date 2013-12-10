
#include <iostream>
#include <cmath>
#include <stdlib.h>

#include "sqrt.h"

using namespace std;

int main(int argc, const char *argv[])
{
    double value;

    if (argc != 2)
    {
        cerr << "format: " << argv[0] << " <number>" << endl;
        return 1;
    }

    value = atoi(argv[1]);
    if (value < 0.0)
        cout << "Cannot find square root of negative number" << endl;
    else
        cout << "square root of " << value << " is " << sqrt(value) << endl;
}
