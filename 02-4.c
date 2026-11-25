#include <stdio.h>

int main (void) {
    int velocidademph;
    int velocidadekph;
    printf("Insira a velocidade em mph: ");
    scanf("%d", &velocidademph);
    velocidadekph = velocidademph * 1.6;
    if (velocidadekph < 80) {
        printf("ACELERE\n");
    } else if (velocidadekph <=100) {
        printf("MANTENHA\n");
    } else {
        printf("DESACELERE\n");
    } return 0;
}
