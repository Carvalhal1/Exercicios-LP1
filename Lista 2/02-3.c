#include <stdio.h>

int main (void) {
    float preçodolar;
    float preçoreal;
    printf("Entre com o preço do celular em dólares: ");
    scanf("%f", &preçodolar);
    preçoreal = preçodolar * 3.17;
    if (preçoreal <= 1000) {
        printf("BOM NEGÓCIO\n");
    };
    return 0;
}
