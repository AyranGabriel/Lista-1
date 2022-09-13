#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/******************************************************************************

                        Acima da m�dia.
                Irei definir void para retornar vazio.
******************************************************************************/
int main(void) {
    
    float A,B,C;
    float media;
    int resultado;
    
    scanf ("%f", &A);
    scanf ("%f", &B);
    scanf ("%f", &C);

    media = (A+B+C)/3;
    resultado = 0;
    
    if (A > media) {
        resultado = resultado + 1;
    } 
        //return resultado;
    if (B > media) {
        resultado = resultado + 1;
    }
        //return resultado;
    if (C > media) {
        resultado = resultado + 1;
    }
        //return resultado;
    
    printf("%d",resultado);
}