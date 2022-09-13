#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/******************************************************************************

                        Acidez de uma solu��o.
                Irei definir void para retornar vazio.
******************************************************************************/
int main(void) {
    
    float solucaoPh;
    
    scanf ("%f", &solucaoPh);
    
    if (solucaoPh < 7){
        printf("Acida");
    }
    
    if (solucaoPh > 7){
    printf("Basica");
    }
    
    if (solucaoPh == 7){
    printf("Neutra");
    }
           
}