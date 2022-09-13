#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/******************************************************************************

                Volume do tronco de uma pir�mide.
                Irei definir void para retornar vazio.
******************************************************************************/
int main(void) {
    
    int basemenor,basemaior;
    int area1,area2;
    float volume,raizquadrada,multiplicacao,terco_da_altura,altura;
    
    scanf ("%f", &altura);
    scanf ("%d", &basemenor);
    scanf ("%d", &basemaior);

    area1 = basemenor*basemenor; //Base menor
    area2 = basemaior*basemaior; //Base maior
    
    multiplicacao = area2*area1;
    raizquadrada = sqrt(multiplicacao);
    volume = altura/3*(area2+raizquadrada+area1);
    printf("%.1f",volume);
}