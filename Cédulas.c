#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/******************************************************************************

                                    C�dulas.
                Irei definir void para retornar vazio.
******************************************************************************/
int main(void) {
    
    printf("Digite o valor inteiro:\n");
    
    int cem,cinquenta,vinte,dez,cinco,dois,um;
    int sobra_de_cem,sobra_de_cinquenta,sobra_de_vinte,sobra_de_dez,sobra_de_cinco,sobra_de_dois,sobra_de_um;
    int inteiro;
    
    scanf ("%d", &inteiro);
    
    cem = inteiro/100;
    sobra_de_cem = inteiro % 100;
    
    cinquenta = sobra_de_cem/50;
    sobra_de_cinquenta = sobra_de_cem % 50;
    
    vinte = sobra_de_cinquenta/20;
    sobra_de_vinte = sobra_de_cinquenta % 20;
    
    dez = sobra_de_vinte/10;
    sobra_de_dez = sobra_de_vinte % 10;
    
    cinco = sobra_de_dez/5;
    sobra_de_cinco = sobra_de_dez % 5;
    
    dois = sobra_de_cinco/2;
    sobra_de_dois = sobra_de_cinco % 2;
    
    um = sobra_de_dois/1;
    sobra_de_um = sobra_de_dois % 1;
    
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinquenta);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d moeda(s) de R$ 1,00\n", um);
}