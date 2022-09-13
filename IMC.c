#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float peso, altura, imc;
    
    scanf ("%F", &peso);
    
    scanf ("%f", &altura);
    
    imc = peso/(altura*altura);
    
    printf("%.1f", imc);

}