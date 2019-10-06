// A simple program that computes the square root of a number
#include <cstdio>
#include <cstdlib>
#include "TutorialConfig.h"


#ifdef USE_MYMATH
#include "MathFunctions.h"
#else
#include <cmath>
#endif

double compute_sqrt(double inputValue)
{
#ifdef USE_MYMATH
    return my_math::sqrt(inputValue);
#else
    return sqrt(inputValue);
#endif
}

int main(int argc, char *argv[])
{
    if (argc<2)
    {
        fprintf(
                stdout, "%s Version %d.%d\n", argv[0], Tutorial_VERSION_MAJOR, Tutorial_VERSION_MINOR
        );
        fprintf(stdout, "Usage: %s number\n", argv[0]);
        return 1;
    }
    double inputValue = atof(argv[1]);
    double outputValue = compute_sqrt(inputValue);
    fprintf(
            stdout, "The square root of %g is %g\n", inputValue, outputValue
    );
    return 0;
}
