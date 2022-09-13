#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/******************************************************************************

                            Area de um trapezio.
                Irei definir void para retornar vazio.
******************************************************************************/
int main(void) {
    
    float basemenor,basemaior,altura;
    float area;
    
    scanf ("%f", &basemenor);
    scanf ("%f", &basemaior);
    scanf ("%f", &altura);
    
    area = ((basemaior+basemenor)*altura)/2;
    
    printf("%.1f", area);
}