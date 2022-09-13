#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/******************************************************************************

                                    Diferen�a Octave.
                Irei definir void para retornar vazio.
******************************************************************************/
int main(void) {
    
    int A,B,C,D;
    
    printf("DIGITE O VALOR A:\n");
    scanf ("%d", &A);
    printf("DIGITE O VALOR B:\n");
    scanf ("%d", &B);
    printf("DIGITE O VALOR C:\n");
    scanf ("%d", &C);
    printf("DIGITE O VALOR D:\n");
    scanf ("%d", &D);
    
    int diferenca= (A*B)-(C*D);
    printf("DIFERENCA = %d", diferenca);
}