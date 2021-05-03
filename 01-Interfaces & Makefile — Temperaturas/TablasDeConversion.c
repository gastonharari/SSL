#include <stdio.h>
#include "Conversion.h"
#include "PrintTablas.h"

int main()
{
    const int upper =300;  /* upper limit */
    const int step =20;    /* step size */
    double fahr, celsius;

    printf("\n\nFahrenheit => Celsius:\n\n");
    PrintTabla(Celsius,upper,step);

    printf("\n\nCelsius => Fahrenheit:\n\n");
    PrintTabla(Farenheit,upper,step);
    
    return 0;
}
