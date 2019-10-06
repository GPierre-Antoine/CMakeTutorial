//
// Created by pierreantoine on 06/10/2019.
//

#include <cstdio>
#include <cstdlib>
#include <cmath>


int main(int argc, char *argv[])
{
    int i;
    double result;

    // make sure we have enough arguments
    if (argc<2)
    {
        fprintf(stderr, "Not enough arguments");
        return EXIT_FAILURE;
    }

    // open the output file
    FILE *fout = fopen(argv[1], "w");
    if (!fout)
    {
        return EXIT_FAILURE;
    }

    // create a source file with a table of square roots
    fprintf(fout, "double sqrtTable[] = {");
    for (i = 0; i<10; ++i)
    {
        result = sqrt(static_cast<double>(i));
        if (i==9)
        {
            fprintf(fout, "%g", result);
        }
        else
        {
            fprintf(fout, "%g, ", result);
        }
    }

    fprintf(fout, "};");
    fclose(fout);
    return EXIT_SUCCESS;
}