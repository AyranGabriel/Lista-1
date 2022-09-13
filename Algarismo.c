#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/******************************************************************************

                            Algarismo das Unidades.
                Irei definir void para retornar vazio.
******************************************************************************/
int main(void) {
    
    printf("Digite um numero:\n");
    
    int inteiro;
    
    scanf ("%d", &inteiro);
    
    int sobra = 0;
    sobra = inteiro % 10;
    
    printf("Algarismo das unidades: %d", sobra);
}