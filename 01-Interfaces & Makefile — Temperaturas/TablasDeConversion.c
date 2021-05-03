#include <stdio.h>
#include "Conversion.h"

int main()
{
    double fahr, celsius;
    int lower, upper, step;

    lower = 0; /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahr = lower;

    printf("\n\nFahrenheit to Celsius:\n\n");
    while (fahr <= upper) {
    celsius = GetCelsFromFahr(fahr);
    printf("%.0f\t%.2f\n", fahr, celsius);
    fahr = fahr + step;
    }

    lower = 0; /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    celsius = lower;

    printf("\n\nCelsius to Fahrenheit:\n\n");
    while (celsius <= upper) {
    fahr = GetFahrFromCels(celsius);
    printf("%.0f\t%.2f\n", celsius, fahr);
    celsius = celsius + step;
    }

    return 0;
}