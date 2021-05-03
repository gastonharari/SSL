#include <stdio.h>
#include "Conversion.h"

int main()
{
    double fahr, celsius;
    int lower, upper, step;

    upper = 300; /* upper limit */
    step = 20; /* step size */

    printf("\n\nFahrenheit => Celsius:\n\n");
    for (fahr = 0.0; fahr <= upper; fahr=fahr+step)
    {
        celsius = GetCelsFromFahr(fahr);
        printf("%.0f\t%.2f\n", fahr, celsius);
    }

    printf("\n\nCelsius => Fahrenheit:\n\n");
    for (celsius = 0.0; celsius <= upper; celsius=celsius+step)
    {
        fahr = GetFahrFromCels(celsius);
        printf("%.0f\t%.2f\n", celsius, fahr);
    }

    return 0;
}