#include <stdio.h>
#include <assert.h>
#include "Conversion.h"

int main(){
    printf("\n\nTest Start:\n\n\n");
    
    printf("Test GetFahrFromCels:\n\n");

    printf("GetFahrFromCels - 0 Cels \t");
    assert(GetFahrFromCels(0)==32.0);
    printf("OK \n");

    printf("GetFahrFromCels - 100 Cels \t");
    assert(GetFahrFromCels(100)==212.0);
    printf("OK \n");

    printf("\n\nTest GetCelsFromFahr:\n\n");

    printf("GetCelsFromFahr - 41 Fahr \t");
    assert(GetCelsFromFahr(41)==5.0);
    printf("OK \n");

    printf("GetCelsFromFahr - 212 Fahr \t");
    assert(GetCelsFromFahr(212)==100.0);
    printf("OK \n");

    printf("\n\nTest Finish OK\n\n");

    return 0;
}