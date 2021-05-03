#include <stdio.h>
#include "Conversion.h"

int main()
{
    const int upper =300;  /* upper limit */
    const int step =20;    /* step size */
    double fahr, celsius;

    printf("\n\nFahrenheit => Celsius:\n\n");
    for (fahr = 0.0; fahr <= upper; fahr=fahr+step)
    {
        celsius = Celsius(fahr);
        printf("%.0f\t%.2f\n", fahr, celsius);
    }

    printf("\n\nCelsius => Fahrenheit:\n\n");
    for (celsius = 0.0; celsius <= upper; celsius=celsius+step)
    {
        fahr = Farenheit(celsius);
        printf("%.0f\t%.2f\n", celsius, fahr);
    }

    return 0;
}