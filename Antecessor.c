#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/******************************************************************************

                            Antecessor e Sucessor.
                Irei definir void para retornar vazio.
******************************************************************************/
int main(void) {
    
    int inteiro,antecessor,sucessor;
    
    scanf ("%d", &inteiro);
    
    antecessor = inteiro-1;
    sucessor = inteiro+1;
    
    printf("%d", antecessor);
    printf("%c", ' ');
    printf("%d", sucessor);
}