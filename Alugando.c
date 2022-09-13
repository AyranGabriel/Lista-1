#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/******************************************************************************

                            Alugando um ve?culo.
                Irei definir void para retornar vazio.
******************************************************************************/

int main(void) {
    
    int d;
    float km,valorfinal;
    
    scanf ("%d", &d);
    scanf ("%f", &km);
    
    if (km > d*100) {
        valorfinal = d*90+12*(km-100*d);
    }
    else {
        valorfinal = d*90;
    }
    
    printf("%.2f", valorfinal);
}