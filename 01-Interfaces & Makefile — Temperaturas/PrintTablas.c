#include <stdio.h>

void printFila(double fst, double snd){
    printf("%.0f\t%.2f\n", fst, snd);
}

void PrintTabla(double (*function)(double),int upper, int step){
double converted;
    for (double temp = 0.0; temp <= upper; temp=temp+step){
        converted = function(temp);
        printFila(temp, converted);
    }
}